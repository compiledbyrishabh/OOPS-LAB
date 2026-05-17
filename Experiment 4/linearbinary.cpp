#include <iostream>
using namespace std;

int main() {
    int arr[10], n, choice, key, found = 0;
    cout << "Enter number of elements (max 10): ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    cout << "1. Linear Search\n2. Binary Search\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << "Element found at index " << i << endl;
                found = 1;
                break;
            }
        }
        if (!found) cout << "Element not found" << endl;
    } 
    else if (choice == 2) {
        int low = 0, high = n - 1, mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] == key) {
                cout << "Element found at index " << mid << endl;
                found = 1;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (!found) cout << "Element not found (Ensure array is sorted for Binary Search)" << endl;
    }

    return 0;
}