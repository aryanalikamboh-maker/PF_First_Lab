#include<iostream>
using namespace std;
int c(int,int);
 int main ()
{
int n1,n2;
cout<<"enter the number:";
cin>>n1;
cout<<"enter the number:";  
cin>>n2;
int res=c(n1,n2);
cout<<"the sum is:"<<res;}
int c(int a,int b)
{
    int sum=a+b;
    return sum;
}  