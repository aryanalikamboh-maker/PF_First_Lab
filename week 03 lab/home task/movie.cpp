#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int a,b,t,f,r;
    int c,d;
    float e;
    string name;

    cout<<"Enter movie name: ";
    getline(cin,name);

    cout<<"Enter adult ticket price: ";
    cin>>a;

    cout<<"Enter child ticket price: ";
    cin>>b;

    cout<<"Enter the number of adult tickets sold: ";
    cin>>c;

    cout<<"Enter the number of child tickets sold: ";
    cin>>d;

    cout<<"Enter the percentage of amount to be donated to charity: ";
    cin>>e;

    t = (a*c) + (b*d);
    f = t * (e / 100.0);   // important fix
    r = t - f;

    cout<<"\nMovie name: "<<name<<endl;
    cout<<"Total amount generated: "<<t<<endl;
    cout<<"Donation to charity: "<<f<<endl;
    cout<<"Remaining amount after donation: "<<r<<endl;

    return 0;
}