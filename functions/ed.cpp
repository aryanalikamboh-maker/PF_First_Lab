#include<iostream>
using namespace std;
void p(int arr[],int n)
{
    int s=0;
    for (int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    if (s%2==0)
    {
        cout<<"the sum is even";
    }
    else
    {
        cout<<"the sum is odd";
}
}
int main (){
int arr[5];
for (int i=0;i<5;i++)
{
    cout<<"enter the number:";
    cin>>arr[i];    
}
p(arr,5);
}