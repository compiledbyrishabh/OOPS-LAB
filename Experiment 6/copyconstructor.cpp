#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int val) {
        value = val;
    }

    Number(const Number &obj) {
        value = obj.value;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(150);
    Number n2 = n1;

    n1.display();
    n2.display();

    return 0;
}