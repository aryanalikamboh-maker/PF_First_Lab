#include<iostream>
using namespace std;

int calculateSum(int arr[100][100], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main ()
{
    int arr[100][100];
    int m, n;

    cout << "Enter the size of rows and columns: ";
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int result = calculateSum(arr, m, n);

    cout << "Sum of all elements = " << result;

    return 0;
}