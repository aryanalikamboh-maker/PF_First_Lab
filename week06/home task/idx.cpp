#include<iostream>
using namespace std;
int main ()
{
char arr [5];
for (int i=0;i<5;i++){
cout<<"enter the "<<i+1<<" chractec:";
cin>>arr[i];
}
for (int i=0;i<5;i++){
cout<<arr[i]<<" founds at index "<<i<<endl;
}


}