# ABC Bank ATM Simulator (C++)

A console-based ATM simulation program written in C++. This project simulates core banking operations including PIN verification, balance inquiries, cash deposits, withdrawals, and optional receipts.

## Features
- **PIN Authentication:** Secures access with a default PIN (`1234`) and blocks the card after 3 consecutive failed attempts.
- **Balance Inquiry:** Displays the current account balance (starts at Rs. 50,000.00).
- **Cash Deposit:** Allows depositing positive amounts and updates the balance immediately.
- **Cash Withdrawal:** Supports quick preset amounts (`1000`, `5000`, `10000`, `25000`) as well as custom withdrawal amounts with balance limit checks.
- **Digital Receipts:** Gives the option to print a transaction summary after every deposit or withdrawal.

## How to Run
1. Make sure you have a C++ compiler installed (such as `g++` or an IDE like Dev-C++, Code::Blocks, or VS Code).
2. Compile the code :
   ```bash
   g++ ATM Mchine.cpp -o atm
   ```
3. Run the executable:
   ```bash
   ./atm
   ```
4. Enter **`1234`** when prompted for the PIN.
