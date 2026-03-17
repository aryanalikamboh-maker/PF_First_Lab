#include<iostream>
using namespace std;
int main ()
{
int n1=0,n2=1,next,fibnoci;
cout<<"enter the series yu want to print: ";
cin>>fibnoci;
cout<<n1<<","<<n2<<",";
for (int i=1;i<=fibnoci-2;i++){
next=n1+n2;
n1=n2;
n2=next;
cout<<next<<",";

}


}