#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNumber;
    float marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}