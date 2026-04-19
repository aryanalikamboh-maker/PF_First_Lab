#include<iostream>
using namespace std;
void c(int a){
int s1=a/100;
int s2=a%10;
if (s1==s2)
{
    cout<<"the digits are symmetric";
}
else
{
    cout<<"the digits are not symmetric";

}    
}
int main ()
{
int a;
cout<<"enter three digoits:";
cin>>a;
c(a);
}