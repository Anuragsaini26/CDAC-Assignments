#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void setAccountNumber(int accNum) {
        accountNumber = accNum;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    void setAccountHolderName(string name) {
        accountHolderName = name;
    }

    string getAccountHolderName() {
        return accountHolderName;
    }

    void setBalance(double bal) {
        balance = bal;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance = balance + amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    int accNum;
    string name;
    double bal, amount;

    cout << "Setup Account Details First:" << endl;
    cout << "Enter Account Number: ";
    cin >> accNum;
    account.setAccountNumber(accNum);
    cout << "Enter Name: ";
    cin >> name;
    account.setAccountHolderName(name);
    cout << "Enter Opening Balance: ";
    cin >> bal;
    account.setBalance(bal);

    do {
        cout << "\n1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
        } else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
        } else if (choice == 3) {
            account.displayAccountDetails();
        }

    } while (choice != 4);

    return 0;
}