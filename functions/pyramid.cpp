#include <iostream>
#include <string>
using namespace std;

double pyramidVolume(double l, double w, double h, string unit)
{
    // convert everything to meters
    if (unit == "centimeter")
    {
        l /= 100;
        w /= 100;
        h /= 100;
    }
    else if (unit == "kilometer")
    {
        l *= 1000;
        w *= 1000;
        h *= 1000;
    }

    // formula
    return (l * w * h) / 3;
}

int main()
{
    double l, w, h;
    string unit;

    cout << "Enter unit (centimeter/meter/kilometer): ";
    cin >> unit;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    cout << "Enter height: ";
    cin >> h;

    cout << "Volume of pyramid: "
         << pyramidVolume(l, w, h, unit)
         << " cubic meters" << endl;

    return 0;
}