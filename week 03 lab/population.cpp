#include<iostream>
using namespace std;
int main ()
{
int a,b,c;
cout<<"enter the current world population";
cin>>a;
cout<<"enter the monthly birth rate (number of births per month):";
cin>>b;
c=a+(b*360);
cout<<"population in three decades will be:"<<c;
}