

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("BitcoinZero-Core", "BitcoinZero Core"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "The %s developers"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"-fallbackfee is set very high! This is the transaction fee you may pay when "
"fee estimates are not available."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"-paytxfee is set very high! This is the transaction fee you will pay if you "
"send a transaction."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Equivalent bytes per sigop in transactions for relay and mining (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Error loading %s: You can't enable HD on a already existing non-HD wallet"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Force relay of transactions from whitelisted peers even if they violate "
"local relay policy (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Maximum allowed median peer time offset adjustment. Local perspective of "
"time may be influenced by peers forward or backward by this amount. "
"(default: %u seconds)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Maximum total fees (in %s) to use in a single wallet transaction or raw "
"transaction; setting this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Reduce storage requirements by pruning (deleting) old blocks. This mode is "
"incompatible with -txindex and -rescan. Warning: Reverting this setting "
"requires re-downloading the entire blockchain. (default: 0 = disable pruning "
"blocks, >%u = target size in MiB to use for block files)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Sets the serialization of raw transaction or block hex returned in non-"
"verbose mode, non-segwit(0) or segwit(1) (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Unable to rewind the database to a pre-fork state. You will need to "
"redownload the blockchain"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Use hierarchical deterministic key generation (HD) after BIP32. Only has "
"effect during wallet creation/first start"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. This option can be specified multiple times"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Whitelist peers connecting from the given IP address (e.g. 1.2.3.4) or CIDR "
"notated network (e.g. 1.2.3.0/24). Can be specified multiple times."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", ""
"You need to rebuild the database using -reindex-chainstate to change -txindex"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "(default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "(default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "<category> can be:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Attempt to recover private keys from a corrupt wallet on startup"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Block creation options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Cannot write default address"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Change index out of range"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Connection options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Done loading"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error initializing block database"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error loading %s"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error loading %s: You can't disable HD on a already existing HD wallet"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error loading block database"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error opening block database"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Importing..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Information"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Insufficient funds"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Loading addresses..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Loading banlist..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Loading block index..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Loading wallet..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Node relay options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Print this help message and exit"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Print version and exit"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "RPC server options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Rescanning..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Rewinding blocks..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Set maximum BIP141 block weight (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Specify data directory"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Specify your own public address"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Starting network threads..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "This is experimental software."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Transaction too large"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Wallet debugging/testing options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Wallet options:"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Warning"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("BitcoinZero-Core", "ZeroMQ notification options:"),
};
