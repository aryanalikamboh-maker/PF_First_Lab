#include<iostream>
using namespace std;
int main ()
{
float a,b;int c,d;
cout<<"enter vegetable price per kilogram:";
cin>>a;
cout<<"enter fruit price per kilogram:";
cin>>b;
cout<<"enter total kilogram of vegetables:";
cin>>c;
cout<<"enter total kilogram of fruits:";
cin>>d;
double t,s;
t=(a*c)+(b*d);
s=t/1.94;
cout<<"total earning in rupees:"<<s;
}