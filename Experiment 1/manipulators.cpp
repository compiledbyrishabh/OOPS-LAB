#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1 = 12.34567;
    int num2 = 45;

    cout << setw(15) << "Column 1" << setw(15) << "Column 2" << endl;
    
    cout << fixed << setprecision(2);
    cout << setw(15) << num1 << setw(15) << num2 << endl;

    cout << setfill('*') << setw(15) << num2 << endl;

    return 0;
}