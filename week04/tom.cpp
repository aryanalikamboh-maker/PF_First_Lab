#include<iostream>
using namespace std;
int main ()
{
int i,t,k,d;
cut<<"entter the number of holidays:";
cin>>i;
k=365-i;
t=k*63+i*127;
d=30000-t;
int hours=d/60;
int minute=d%60;
if (d<=30000){
cout<<"tom sleeps well"<<endl;
cout<<hours<<"hours and"<<minutes<<"minutes less for play"<<endl;
}
else
{
cout<<"tom will run away"<<endl;
cout<<hours<<"hours and"<<minutes<<"minutes less for play"<<endl;

}






}