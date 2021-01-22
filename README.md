# OS_LAB9
OS 9 Lab RPC bind shell with authorization (C/RPC)

## Installation and setting up
Install rpcbind:
```bash
sudo apt-get install rpcbind
```
Compile:
```bash
make -f Makefile.IDL
```
## Start server side
Start rpcbind:
```bash
rpcbind
```
Start the server:
```bash
./IDL_server
```
## Start client side
```bash
./IDL_client <ip-address>
```
