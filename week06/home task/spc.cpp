#include<iostream>
using namespace std;

int main() {
    int t;
    cout << "enter the size of array: ";
    cin >> t;

    int arr[t];

    for (int i = 0; i < t; i++) {
        cout << "enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }

    bool c = true;  

    for (int i = 0; i < t; i++) {
        if ((i % 2 == 0 && arr[i] % 2 != 0) ||
            (i % 2 != 0 && arr[i] % 2 == 0)) {
            c = false;
            break;
        }
    }

    if (c == true) {
        cout << "the array is special";
    } else {
        cout << "the array is not special";
    }

    return 0;
}