#include <iostream>
using namespace std;

void largestColumnFirst(int M[10][5], int rows) {
    int maxSum = -99999, maxCol = 0;

    for (int j = 0; j < 5; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) sum += M[i][j];
        if (sum > maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }

    for (int i = 0; i < rows; i++) {
        int temp = M[i][0];
        M[i][0] = M[i][maxCol];
        M[i][maxCol] = temp;
    }
}

int main() {
    int rows, matrix[10][5];
    cout << "Enter rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    largestColumnFirst(matrix, rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}