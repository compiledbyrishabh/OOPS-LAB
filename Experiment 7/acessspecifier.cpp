#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;

public:
    void setData(int empId, double empSalary) {
        id = empId;
        salary = empSalary;
    }

    void displayData() {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setData(101, 55000.50);
    emp.displayData();
    return 0;
}