#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
double n1,n2;
cout<<"enter the distance from base of tree:";
cin>>n1;
cout<<"enter the height of tree:";
cin>>n2;
cout<<"theta must be in radian"<<endl;
double s=n2*3.14/180;
double h=tan(s)*n1;
cout<<"the height of tree is:"<<h<<"feet";


}