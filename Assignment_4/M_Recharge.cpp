#include <iostream>
#include <string>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    string customerName;
    float balance;

public:
    // Register account details
    void registerAccount()
    {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        balance = 0;
    }

    // Recharge balance
    void recharge()
    {
        float amount;

        cout << "Enter Recharge Amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Recharge successful.\n";
    }

    // Deduct balance
    void deductBalance()
    {
        float amount;

        cout << "Enter Amount to Deduct: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount deducted successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    // Display account details
    void displayDetails()
    {
        cout << "\n--- Account Details ---";
        cout << "\nCustomer Name: " << customerName;
        cout << "\nMobile Number: " << mobileNumber;
        cout << "\nCurrent Balance: Rs. " << balance << endl;
    }

int main()
{
    MobileRecharge m;

    m.registerAccount();
    m.recharge();
    m.deductBalance();
    m.displayDetails();

    return 0;
}