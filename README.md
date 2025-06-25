# 🧵 Multi-Threaded File System

A C++-based simulated file system supporting multi-threaded client-server communication. This system mimics core file system operations such as file creation, traversal, and memory management using a tree-based data structure.

## ⚙️ Key Features

- 🧶 **Multi-threaded Server**: Handles concurrent client requests using POSIX threads
- 🗂️ **Custom File Structure**: Tree-based representation for files and folders
- 📁 **File Operations**: Supports create, read, delete, and navigate operations
- 🧠 **Memory Management**: Simulated memory handling using `memory.dat`
- 🖧 **Client-Server Architecture**: Inter-process communication via TCP sockets

## 🏗️ Project Structure

- `main.cpp`: Launches the server
- `client.cpp`: Simulated client to send commands
- `server.cpp`: Multi-threaded server logic
- `file_node.cpp`, `folder_node.cpp`: Node structures for the file tree
- `file_tree.cpp`: File system operations (insert, delete, traverse)
- `util.cpp`: Utility functions
- `memory.dat`: Simulated memory block

## 🚀 How to Build and Run

```bash
# Compile server and client
g++ server.cpp file_tree.cpp file_node.cpp folder_node.cpp util.cpp -o server -lpthread
g++ client.cpp -o client

# Run the server in one terminal
./server

# Run the client in another terminal
./client

##🧠 Why It’s Unique
This project provides hands-on insight into:

Operating systems principles like file systems, multithreading, and synchronization

Tree-based file storage simulation without using the actual disk

Client-server IPC models and thread-safe architecture

Ideal for systems programming learners and OS project demos.
