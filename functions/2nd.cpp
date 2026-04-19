#include<iostream>
using namespace std;
int c(int a,int b)
{
    int res=1;
    for(int i=1;i<=b;i++)
    {
        res=res*a;
    }
    return res;
}    
int main ()
{
int bas,exp;
cout<<"enter the base number:";
cin>>bas;
cout<<"enter the exponent number:";
cin>>exp;   
int res=c(bas,exp);
cout<<"the result is:"<<res;
}
