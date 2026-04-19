#include <iostream>
using namespace std;

void add15Minutes(int hr, int mr)
{
    mr += 15;

    hr += mr / 60; 
    mr = mr % 60;    

    hr = hr % 24;    

    cout << "The time after 15 minutes is: "
         << hr << " : " << mr << endl;
}

int main()
{
    int hr, mr;

    cout << "Enter the hour: ";
    cin >> hr;

    cout << "Enter the minute: ";
    cin >> mr;

    add15Minutes(hr, mr);

    return 0;
}