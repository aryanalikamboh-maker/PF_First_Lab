#include<iostream>
using namespace std;
int main ()
{
int a,count=0;
cout<<"enter the digit :";
cin>>a;
for (int i=a;i>0;i=i/10){
count++;
}
cout<<"the total digits are:"<<count;

}