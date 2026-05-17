#include <iostream>
using namespace std;

int main() {
    char str1[50], str2[50], concat[100];
    int len1 = 0, len2 = 0, i = 0, match = 1;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }
    cout << "Length of first string: " << len1 << endl;

    for (i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for (int j = 0; j < len2; j++) {
        concat[i + j] = str2[j];
    }
    concat[len1 + len2] = '\0';
    cout << "Concatenated string: " << concat << endl;

    if (len1 != len2) {
        match = 0;
    } else {
        for (i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                match = 0;
                break;
            }
        }
    }

    if (match == 1) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}