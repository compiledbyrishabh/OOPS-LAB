#include <iostream>
using namespace std;

class PrintData {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }

    void print(double f) {
        cout << "Printing float: " << f << endl;
    }
};

int main() {
    PrintData pd;
    pd.print(5);
    pd.print(500.263);
    return 0;
}