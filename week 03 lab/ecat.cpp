#include<iostream>
using namespace std;
int main ()
{
int a,b,c;
cout<<"enter the matric marks out of 1100:";
cin>>a;
cout<<"enter the inter part 1 marks out of 550:";
cin>>b;
cout<<"enter ecat marks out of 400:";
cin>>c;
float d=(a/1100.0)*10;
float e=(b/550.0)*40;
float f=(c/400.0)*50;
float o=d+e+f;
cout<<"the aggregate is equal to "<<o;
}
