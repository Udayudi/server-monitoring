# Server Monitoring Tool 


### Features

- CPU usage
- Memory usage
- Disk usage
- Running processes
- Refresh every 20 seconds

### 🧠 Core Concepts

- /proc filesystem (Linux internals)
- File parsing
- System calls
- Real-time updates

### 📁 Project Structure

    server-monitor/
    ├── main.c 
    ├── cpu.c 
    ├── memory.c 
    ├── disk.c 
    ├── process.c 
    ├── utils.h 
    └── Makefile

### ▶️ How to Run

```console
foo@bar:~$ make ./monitor

foo@bar:~$ ./monitor

```
