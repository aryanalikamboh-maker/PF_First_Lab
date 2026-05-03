#include<iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool isIdentity = true;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] != (i == j))
            {
                isIdentity = false;
            }
        }
    }

    if(isIdentity)
        cout << "Identity Matrix";
    else
        cout << "Not Identity Matrix";

    return 0;
}