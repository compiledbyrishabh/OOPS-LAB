#include <iostream>
using namespace std;

class Shape {
protected:
    double dimension;
public:
    void setDimension(double d) {
        dimension = d;
    }

    virtual double calculateArea() = 0;
};

class Square : public Shape {
public:
    double calculateArea() {
        return dimension * dimension;
    }
};

int main() {
    Square s;
    s.setDimension(5.0);
    cout << "Area of Square: " << s.calculateArea() << endl;
    return 0;
}