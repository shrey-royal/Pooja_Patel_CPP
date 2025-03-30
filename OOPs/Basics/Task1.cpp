// Bank Account Management System
// Create a class BankAccount with private attributes such as accountNumber, balance, and accountHolderName. Implement methods to deposit, withdraw, and check the balance. Additionally, implement a method that charges a fee for each transaction and ensures that the withdrawal does not exceed the balance.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;
    string accountHolderName;
    const float transactionFee = 5;

public:
    void createBankAccount(int accNumber, string accHolderName, float initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount" << endl;
            return;
        }
        balance += amount;
        balance -= transactionFee;
        cout << "Deposited " << amount << " successfully. Transaction fee of " << transactionFee << " deducted." << endl;
        cout << "Current Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }
        if (amount + transactionFee > balance) {
            cout << "Insufficient balance for withdrawal!" << endl;
            return;
        }
        balance -= amount + transactionFee;
        cout << "Withdrawn " << amount << " successfully. Transaction fee of " << transactionFee << " deducted." << endl;
        cout << "Current Balance: " << balance << endl;
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void displayAccountInfo() {
        cout << "Account No.: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.createBankAccount(12345, "Krupali Nayak", 1000.0f);

    myAccount.displayAccountInfo();

    myAccount.deposit(500.f);
    myAccount.withdraw(300.f);
    myAccount.checkBalance();

    myAccount.withdraw(1500.f);

    return 0;
}