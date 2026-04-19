#include<iostream>
using namespace std;

void c(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "The letter " << ch << " is small";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The letter " << ch << " is capital";
    }
    else
    {
        cout << "It is not an alphabet character";
    }
}

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    c(ch);
}