#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class 1
class Customer {
private:
    int customerID;
    string name;
    string address;

public:
    Customer(int id, string n, string addr) {
        customerID = id;
        name = n;
        address = addr;
    }

    void displayCustomer() {
        cout << "Customer ID: " << customerID << "\nName: " << name
             << "\nAddress: " << address << endl;
    }

    int getCustomerID() { return customerID; }
    string getName() { return name; }
};

// Class 2
class Account {
private:
    int accountNo;
    int customerID;
    string accountType;
    double balance;

public:
    Account(int accNo, int custID, string type, double bal) {
        accountNo = accNo;
        customerID = custID;
        accountType = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
            return false;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
        return true;
    }

    void displayAccount() {
        cout << "Account No: " << accountNo << "\nType: " << accountType
             << "\nBalance: " << balance << endl;
    }

    int getAccountNo() { return accountNo; }
    int getCustomerID() { return customerID; }
    double getBalance() { return balance; }
};

// Class 3
class Transaction {
private:
    int transactionID;
    int accountNo;
    string type;      // "Deposit" or "Withdraw"
    double amount;

public:
    Transaction(int tid, int accNo, string t, double amt) {
        transactionID = tid;
        accountNo = accNo;
        type = t;
        amount = amt;
    }

    void displayTransaction() {
        cout << "Txn ID: " << transactionID << " | Account: " << accountNo
             << " | Type: " << type << " | Amount: " << amount << endl;
    }
};

// Class 4
class Bank {
private:
    string bankName;
    vector<Customer> customers;
    vector<Account> accounts;
    vector<Transaction> transactions;
    int transactionCounter;

public:
    Bank(string name) {
        bankName = name;
        transactionCounter = 1;
    }

    void addCustomer(Customer c) {
        customers.push_back(c);
    }

    void addAccount(Account a) {
        accounts.push_back(a);
    }

    void makeDeposit(int accNo, double amount) {
        for (auto &a : accounts) {
            if (a.getAccountNo() == accNo) {
                a.deposit(amount);
                transactions.push_back(Transaction(transactionCounter++, accNo, "Deposit", amount));
                return;
            }
        }
        cout << "Account not found!\n";
    }

    void makeWithdrawal(int accNo, double amount) {
        for (auto &a : accounts) {
            if (a.getAccountNo() == accNo) {
                if (a.withdraw(amount))
                    transactions.push_back(Transaction(transactionCounter++, accNo, "Withdraw", amount));
                return;
            }
        }
        cout << "Account not found!\n";
    }

    void displayAllCustomers() {
        cout << "\n--- " << bankName << " Customers ---\n";
        for (auto &c : customers) {
            c.displayCustomer();
            cout << "-----------------------\n";
        }
    }

    void displayAllAccounts() {
        cout << "\n--- Accounts ---\n";
        for (auto &a : accounts) {
            a.displayAccount();
            cout << "-----------------------\n";
        }
    }

    void displayAllTransactions() {
        cout << "\n--- Transaction History ---\n";
        for (auto &t : transactions) {
            t.displayTransaction();
        }
    }
};

int main() {
    Bank bank("City National Bank");

    Customer c1(1, "Riya Sharma", "Delhi");
    Customer c2(2, "Aman Gupta", "Mumbai");
    bank.addCustomer(c1);
    bank.addCustomer(c2);

    Account acc1(1001, 1, "Savings", 5000);
    Account acc2(1002, 2, "Current", 10000);
    bank.addAccount(acc1);
    bank.addAccount(acc2);

    bank.displayAllCustomers();
    bank.displayAllAccounts();

    bank.makeDeposit(1001, 1500);
    bank.makeWithdrawal(1002, 2000);
    bank.makeWithdrawal(1001, 10000);  // should fail - insufficient balance

    bank.displayAllAccounts();
    bank.displayAllTransactions();

    return 0;
}