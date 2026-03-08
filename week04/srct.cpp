#include<iostream>
using namespace std;
int main ()
{
string s;
cout<<" enter the size of geomatric figures:";
cin>>s;
if (s=="square"){
    float t,i;
cin>>i;
t=i*i;
cout<<t<<endl;
}
if (s=="rectangle"){
float u,v,s;
cin>>u>>v;
s=u*v;
cout<<s<<endl;
}
 if (s=="circle"){
    float l,e;
    cin>>l;
e=3.14*l*l;
cout<<e<<endl;
}
if (s=="triangle"){
float m,n,k;
cin>>m;
cin>>n;
k=0.5*m*n;
cout<<k<<endl;}
}