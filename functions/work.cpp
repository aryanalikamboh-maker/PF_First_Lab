#include<iostream>
using namespace std;
c(int h,int d,int w)
{

    double wd=d*0.90;
    double ta=wd*w*10;
    if (ta>=h)
    {
        cout<<"Yes! "<<ta-h<<" hours left.";
    }
    else
    {
        cout<<"Not enough time! "<<h-ta<<" hours needed.";
    }
}
int main ()
{
int h,d,w;
cout<<"Enter the hours needed ";
cin>>h;
cout<<"Enter the days: ";
cin>>d;
cout<<"Enter the workers: ";
cin>>w;
c(h,d,w);


}