#include <iostream>
using namespace std;

void c(double a, char s)
{
    double price = a;
    double t = 0;

    if (s == 'm')
    {
        t = a * 0.06;
    }
    else if (s == 'e')
    {
        t = a * 0.08;
    }
    else if (s == 's')
    {
        t = a * 0.10;
    }
    else if (s == 'v')
    {
        t = a * 0.12;
    }
    else if (s == 't')
    {
        t = a * 0.15;
    }
    else
    {
        cout << "Invalid input";
        return;
    }

    price = price + t;

    cout << "The price of the vehicle is: " << price << endl;
}

int main()
{
    char s;
    double pr;

    cout << "Enter the price: ";
    cin >> pr;

    cout << "Enter vehicle type: ";
    cin >> s;

    c(pr, s);

    return 0;
}