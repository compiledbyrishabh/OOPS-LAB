#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string depositorName;
    long accountNumber;
    double balance;

public:
    void initialValues(string name, long accNum, double bal) {
        depositorName = name;
        accountNumber = accNum;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited. New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn. Remaining Balance: " << balance << endl;
        }
    }

    void display() {
        cout << "\nAccount Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.initialValues("Rishabh", 987654321, 5000.0);
    account.display();
    account.deposit(1500.0);
    account.withdraw(2000.0);
    account.display();
    return 0;
}