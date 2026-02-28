#include<iostream>
using namespace std;
int main ()
{
int s,f;
cout<<"enter minutes";
cin>>s;
cout<<"enter the frame per second";
cin>>f;
int t=s*60*f;
cout<<"total frames: "<<t;
}