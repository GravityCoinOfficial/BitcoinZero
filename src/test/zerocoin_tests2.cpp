#include "util.h"

#include "clientversion.h"
#include "primitives/transaction.h"
#include "random.h"
#include "sync.h"
#include "utilstrencodings.h"
#include "utilmoneystr.h"
#include "test/test_bitcoin.h"

#include <stdint.h>
#include <vector>

#include "chainparams.h"
#include "consensus/consensus.h"
#include "consensus/validation.h"
#include "key.h"
#include "main.h"
#include "miner.h"
#include "pubkey.h"
#include "random.h"
#include "txdb.h"
#include "txmempool.h"
#include "ui_interface.h"
#include "rpc/server.h"
#include "rpc/register.h"
#include "zerocoin.h"

#include "test/fixtures.h"
#include "test/testutil.h"

#include "wallet/db.h"
#include "wallet/wallet.h"

#include <boost/filesystem.hpp>
#include <boost/test/unit_test.hpp>
#include <boost/thread.hpp>

BOOST_FIXTURE_TEST_SUITE(zerocoin_tests2, ZerocoinTestingSetup109)

BOOST_AUTO_TEST_CASE(zerocoin_mintspend2)
{
    vector<uint256> vtxid;
    std::vector<CMutableTransaction> MinTxns;
    //109 blocks already minted

    for (int d=1; d<=10; d*=10) {
        string denomination = to_string(d);

        printf("Testing denomination %s\n", denomination.c_str());
        string stringError;
        //Make sure that transactions get to mempool
        pwalletMain->SetBroadcastTransactions(true);

        printf("Creating 5 mints at height %d\n", chainActive.Height() + 1);
        //Block 110 create 5 mints
        //Verify Mint is successful
        for(int i = 0; i < 5; i++)
            BOOST_CHECK_MESSAGE(pwalletMain->CreateZerocoinMintModel(stringError, denomination.c_str()), stringError + " - Create Mint failed");

        //Put 5 in the same block
        BOOST_CHECK_MESSAGE(mempool.size() == 5, "Mints were not added to mempool");

        vtxid.clear();
        mempool.queryHashes(vtxid);
        MinTxns.clear();
        for(int i = 0; i < 5; i++)
            MinTxns.push_back(*mempool.get(vtxid.at(i)));

        int previousHeight = chainActive.Height();
        CBlock b = CreateAndProcessBlock(MinTxns, scriptPubKey);
        BOOST_CHECK_MESSAGE(previousHeight + 1 == chainActive.Height(), "Block not added to chain");
        BOOST_CHECK_MESSAGE(mempool.size() == 0, "Mempool not cleared");

        printf("Creating 6 mints at height %d\n", chainActive.Height() + 1);
        //Block 111, put 6 mints
        for(int i = 0; i < 6; i++)
            BOOST_CHECK_MESSAGE(pwalletMain->CreateZerocoinMintModel(stringError, denomination.c_str()), stringError + " - Create Mint failed");

        //Put 6 in the same block
        BOOST_CHECK_MESSAGE(mempool.size() == 6, "Mints were not added to mempool");

        vtxid.clear();
        mempool.queryHashes(vtxid);
        MinTxns.clear();
        for(int i = 0; i < 6; i++)
            MinTxns.push_back(*mempool.get(vtxid.at(i)));

        previousHeight = chainActive.Height();
        b = CreateAndProcessBlock(MinTxns, scriptPubKey);
        BOOST_CHECK_MESSAGE(previousHeight + 1 == chainActive.Height(), "Block not added to chain");
        BOOST_CHECK_MESSAGE(mempool.size() == 0, "Mempool not cleared");

        for (int i = 0; i < 5; i++)
        {
            std::vector<CMutableTransaction> noTxns;
            CBlock b = CreateAndProcessBlock(noTxns, scriptPubKey);
        }

        printf("Creating 10 mints and one spend at height %d\n", chainActive.Height() + 1);
        //Block 117, put 10 mints and one spend
        for(int i = 0; i < 10; i++)
            BOOST_CHECK_MESSAGE(pwalletMain->CreateZerocoinMintModel(stringError, denomination.c_str()), stringError + " - Create Mint failed");
        BOOST_CHECK_MESSAGE(pwalletMain->CreateZerocoinSpendModel(stringError, "", denomination.c_str()), "Spend failed");

        //Put 11 in the same block
        BOOST_CHECK_MESSAGE(mempool.size() == 11, "Mints were not added to mempool");

        vtxid.clear();
        mempool.queryHashes(vtxid);
        MinTxns.clear();
        for(int i = 0; i < 11; i++)
            MinTxns.push_back(*mempool.get(vtxid.at(i)));

        previousHeight = chainActive.Height();
        b = CreateAndProcessBlock(MinTxns, scriptPubKey);
        BOOST_CHECK_MESSAGE(previousHeight + 1 == chainActive.Height(), "Block not added to chain");
        BOOST_CHECK_MESSAGE(mempool.size() == 0, "Mempool not cleared");

        printf("Creating 20 blocks with 1 spend each starting at height %d\n", chainActive.Height() + 1);
        //20 spends in 20 blocks
        for(int i = 0; i < 20; i++) {

            BOOST_CHECK_MESSAGE(pwalletMain->CreateZerocoinSpendModel(stringError, "", denomination.c_str()), "Spend failed");
            BOOST_CHECK_MESSAGE(mempool.size() == 1, "Spends were not added to mempool");
            vtxid.clear();
            mempool.queryHashes(vtxid);
            MinTxns.clear();
            MinTxns.push_back(*mempool.get(vtxid.at(0)));
            previousHeight = chainActive.Height();
            b = CreateAndProcessBlock(MinTxns, scriptPubKey);
            BOOST_CHECK_MESSAGE(previousHeight + 1 == chainActive.Height(), "Block not added to chain");
            BOOST_CHECK_MESSAGE(mempool.size() == 0, "Mempool not cleared");
        }

        printf("Creating 19 mints at height %d\n", chainActive.Height() + 1);
        //Put 19 mints
        for(int i = 0; i < 19; i++)
            BOOST_CHECK_MESSAGE(pwalletMain->CreateZerocoinMintModel(stringError, denomination.c_str()), stringError + " - Create Mint failed");

        //Put 19 in the same block
        BOOST_CHECK_MESSAGE(mempool.size() == 19, "Mints were not added to mempool");

        vtxid.clear();
        mempool.queryHashes(vtxid);
        MinTxns.clear();
        for(int i = 0; i < 19; i++)
            MinTxns.push_back(*mempool.get(vtxid.at(i)));

        previousHeight = chainActive.Height();
        b = CreateAndProcessBlock(MinTxns, scriptPubKey);
        BOOST_CHECK_MESSAGE(previousHeight + 1 == chainActive.Height(), "Block not added to chain");
        BOOST_CHECK_MESSAGE(mempool.size() == 0, "Mempool not cleared");

        for (int i = 0; i < 5; i++)
        {
            std::vector<CMutableTransaction> noTxns;
            CBlock b = CreateAndProcessBlock(noTxns, scriptPubKey);
        }

        printf("Creating 19 blocks with 1 spend each starting at height %d\n", chainActive.Height() + 1);
        //19 spends in 19 blocks
        for(int i = 0; i < 19; i++) {
            BOOST_CHECK_MESSAGE(pwalletMain->CreateZerocoinSpendModel(stringError, "", denomination.c_str()), "Spend failed");
            BOOST_CHECK_MESSAGE(mempool.size() == 1, "Spends were not added to mempool");
            vtxid.clear();
            mempool.queryHashes(vtxid);
            MinTxns.clear();
            MinTxns.push_back(*mempool.get(vtxid.at(0)));
            previousHeight = chainActive.Height();
            b = CreateAndProcessBlock(MinTxns, scriptPubKey);
            BOOST_CHECK_MESSAGE(previousHeight + 1 == chainActive.Height(), "Block not added to chain");
            BOOST_CHECK_MESSAGE(mempool.size() == 0, "Mempool not cleared");
        }
    }

    vtxid.clear();
    MinTxns.clear();
    mempool.clear();
}

BOOST_AUTO_TEST_SUITE_END()
