#include <iostream>
using namespace std;

class Shape {
public:
    double calculateCircleArea(double r) {
        return 3.14159 * r * r;
    }

    double calculateRectangleArea(double l, double w) {
        return l * w;
    }

    double calculateSquareArea(double s) {
        return s * s;
    }
};

int main() {
    Shape figure;
    
    double radius, length, width, side;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << figure.calculateCircleArea(radius) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << figure.calculateRectangleArea(length, width) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square: " << figure.calculateSquareArea(side) << endl;

    return 0;
}