#include<iostream>
using namespace std;
int main ()
{
for (int i=1;i<=5;i++){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for (int j=1;j<=4;j++){
    for (int k=4;k>=j;k--){
        cout<<"*";
    }
    cout<<endl;
}





return 0;
}