#include <iostream>
using namespace std;

class SecureAccount {
private:
    int pin;

public:
    void setPin(int oldPin, int newPin) {
        if (oldPin == 1234) {
            pin = newPin;
            cout << "PIN updated successfully." << endl;
        } else {
            cout << "Access Denied: Incorrect old PIN." << endl;
        }
    }

    void accessData(int inputPin) {
        if (inputPin == pin) {
            cout << "Access Granted: Displaying sensitive secure records." << endl;
        } else {
            cout << "Access Denied: Invalid PIN." << endl;
        }
    }
};

int main() {
    SecureAccount account;
    account.setPin(1234, 9999);
    
    cout << "\nAttempt 1:" << endl;
    account.accessData(0000);
    
    cout << "\nAttempt 2:" << endl;
    account.accessData(9999);
    
    return 0;
}