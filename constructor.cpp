#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
        cout << "Default Constructor Called" << endl;
    }

    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
        cout << "Parameterized Constructor Called" << endl;
    }

    void display() {
        cout << "Coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    p1.display();

    Point p2(10, 20);
    p2.display();

    return 0;
}