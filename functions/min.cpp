#include<iostream>
using namespace std;
int c(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}   
int main() {
    int n1,n2,min;
    cout<<"enter the number:";
    cin>>n1;    
    cout<<"enter the number:";  
    cin>>n2;    
    int res=c(n1,n2);
cout<<"the minimum is:"<<res;
}