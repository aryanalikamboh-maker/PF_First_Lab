#include <iostream>
using namespace std;

bool isIdentical(int a[3], int b[3]) {
    return (a[0] == b[0] && a[1] == b[1] && a[2] == b[2]);
}

int main() {
    int n, arr[100][3];

    cout << "Enter number of rows: ";
    cin >> n;

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isIdentical(arr[i], arr[j])) {
                cout << "Row " << i << " and Row " << j << " are identical\n";
            }
            else
            cout<<"Row "<<i<<" and Row "<<j<<" are not identical\n";
        }
    }

    return 0;
}