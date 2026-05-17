#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;
};

class Scannable {
public:
    virtual void scan() = 0;
};

class AllInOnePrinter : public Printable, public Scannable {
public:
    void print() {
        cout << "Printing document..." << endl;
    }

    void scan() {
        cout << "Scanning document..." << endl;
    }
};

int main() {
    AllInOnePrinter device;
    device.print();
    device.scan();
    return 0;
}