#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3,name;
    int age1, age2, age3,max=0;

    cout << "Enter name of first brother: ";
    cin >> name1;
    cout << "Enter age: ";
    cin >> age1;

    cout << "Enter name of second brother: ";
    cin >> name2;
    cout << "Enter age: ";
    cin >> age2;

    cout << "Enter name of third brother: ";
    cin >> name3;
    cout << "Enter age: ";
    cin >> age3;
     if (age1>max){max=age1;name=name1;}
if (age2>max){max=age2;name=name2;}
if(age3>max){max=age3;name=name3;}
cout<<name<<" is youngest brother"<< " its age is "<<max;

}