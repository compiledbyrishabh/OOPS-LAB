#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;

public:
    void setBrand(string carBrand) {
        brand = carBrand;
    }

    string getBrand() {
        return brand;
    }
};

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    cout << "Car Brand: " << myCar.getBrand() << endl;
    return 0;
}