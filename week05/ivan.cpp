#include<iostream>
using namespace std;
int main ()
{
int age,money,s=0,t;
cout<<"enter the age 1800 to 1900:";
cin>>age;
cout<<"emter the inherited money:";
cin>>money;
for (int i=1800;i<=age;i++){
if (i%2==0){s=s+1200;}
else {s=s+1200+(50*age);}


}
t=s-money;
if (s>0){
cout<<"yes he will be survived:"<<t;
}
else
{
    cout<<"not survived:";
    }



}