#include<iostream>
using namespace std;

double c(int bal,int yer)
{
    if (bal < 1000){
        double b = bal * 0.05 * yer;
        bal = bal + b;
    }
    else if (bal >= 1000 && bal < 5000){
        double b = bal * 0.07 * yer;
        bal = bal + b;
    }
    else if (bal >= 5000){
        double b = bal * 0.10 * yer;
        bal = bal + b;
    }

    if (yer >= 3){
        double b = bal * 0.02;
        bal = bal + b;
    }

    return bal;
}

int main ()
{
    int bal,yer;

    cout<<"enter the balance: ";
    cin>>bal;

    cout<<"enter the years: ";
    cin>>yer;

    cout<<"the result is: " << c(bal,yer);
}