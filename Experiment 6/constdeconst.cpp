#include <iostream>
using namespace std;

class Demo {
    int id;

public:
    Demo(int num) {
        id = num;
        cout << "Constructor called for Object " << id << endl;
    }

    ~Demo() {
        cout << "Destructor called for Object " << id << endl;
    }
};

int main() {
    cout << "Entering main" << endl;
    
    Demo obj1(1);
    {
        cout << "Entering inner block" << endl;
        Demo obj2(2);
        cout << "Exiting inner block" << endl;
    }
    
    cout << "Exiting main" << endl;
    return 0;
}