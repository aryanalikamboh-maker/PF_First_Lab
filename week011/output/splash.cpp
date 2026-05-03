#include<iostream>
using namespace std;
bool s(string arr[5][5],int r,int c)
{
    if(arr[r][c]=="*")
    {
        cout<<"splash";
        return true;
    }
    else
    {
        cout<<"no splash";
        return false;
    }
}

int main ()
{
    string arr[5][5]={".",".",".","*","*",".","*",".",".",".",".",".",".",".",".",".",".",".","*",".",".",".",".","."};
    int r,c;
    cout<<"enter rows:";
    cin>>r;
    cout<<"enter column:";
    cin>>c;
s(arr,r,c);
}