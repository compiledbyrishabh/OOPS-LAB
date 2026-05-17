#include <iostream>
using namespace std;

double area(double radius) {
    return 3.14159 * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Circle (r=5): " << area(5.0) << endl;
    cout << "Area of Rectangle (l=4, w=6): " << area(4.0, 6.0) << endl;
    cout << "Area of Triangle (b=4, h=5): " << area(4.0, 5.0, true) << endl;
    return 0;
}