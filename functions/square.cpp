#include<iostream>
using namespace std;
int c(int a)
{
    for (int i=0;i*i*i<=a;i++)
    {
        if(i*i*i==a)
        {
            return i;
        }
    }
}   
int main ()
{

    int n1;
    cout<<"enter the perfect square root number:";  
    cin>>n1;
    int s=c(n1);
    cout<<"the square root is:"<<s;
}