#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Display of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display of Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    return 0;
}