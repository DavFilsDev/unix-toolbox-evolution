# Security Scanner – File Integrity Checker (C + Bash)

## Overview

**Security Scanner** is an advanced Linux system tool written in **C and Bash** that detects unauthorized file modifications using cryptographic hashing.

It works like a simplified version of **Tripwire**, used in cybersecurity to detect malware, intrusions, and system tampering.

---

## Features

*  SHA-256 hashing for file integrity
*  Baseline database creation
*  Detect modified, deleted, and new files
*  Configurable scan paths
*  Modular C architecture (one function per file)
*  Bash automation script
*  Human-readable security reports
*  Makefile build system

---

##  How It Works

1. **Baseline Mode**

   * Computes SHA-256 hash of files
   * Stores results in `baseline.db`

2. **Scan Mode**

   * Recomputes hashes
   * Compares with baseline
   * Detects:

     * Modified files
     * Deleted files
     * New files

---

##  Project Structure

```
security-scanner/
├── src/
│   ├── main.c              # Entry point
│   ├── hash_utils.c/h       # SHA256 hashing
│   ├── db_manager.c/h       # Baseline database manager
│   ├── scanner.c/h           # Scanning logic
│   ├── report.c/h            # Logging system
│   ├── config.c/h            # Configuration module
│
├── scripts/
│   └── security_scan.sh      # Automation script
│
├── database/
│   └── baseline.db           # Stored file hashes
│
├── Makefile
└── README.md
```

---

##  Installation

###  Clone the repository

```bash
git clone https://github.com/yourusername/security-scanner.git
cd security-scanner
```

### Build

```bash
make
```

> Requires OpenSSL (`libssl-dev` on Debian/Ubuntu)

---

## Usage

### ➤ Create baseline

```bash
./security_scanner --baseline
```

### ➤ Scan system

```bash
./security_scanner
```

### ➤ Automated scan

```bash
bash scripts/security_scan.sh
```

---

## Example Output

```
[*] Scanning /home for integrity issues...
[!] Modified: /home/user/.bashrc
[+] New file: /home/user/malware.sh
[-] Deleted: /home/user/old.txt
```

---

## Technologies

* C (System Programming)
* OpenSSL (Cryptography)
* Bash scripting
* Linux File System APIs
* Makefile build system

---

## Learning Goals

This project demonstrates:

* Low-level system programming in C
* File system traversal
* Cryptographic hashing
* Secure baseline integrity checking
* Modular software architecture
* Linux security tooling concepts
* Bash + C integration

---

## Future Improvements

* Real-time monitoring using `inotify`
* JSON report export
* Encrypted baseline database
* CLI flags (`--scan /path`, `--report`, `--watch`)
* Malware signature detection
* Rootkit detection heuristics
* GUI dashboard

---

## 👨‍💻 Author

**David RATIANDRAIBE**
Cybersecurity & AI-Oriented Engineer (Student)
Madagascar 🇲🇬

---

##  Why This Project Matters

File integrity monitoring is used in:

* Cybersecurity operations
* Incident response
* Malware detection
* Forensics
* Secure servers
