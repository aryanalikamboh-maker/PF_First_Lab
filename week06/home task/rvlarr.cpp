#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string srr, result = "";
    cout << "Enter the name: ";
    getline(cin, srr);

    for (int i = 0; i < srr.length(); i++)
    {
        char ch = srr[i];

        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            continue;
        }

        result = result + ch;
    }

    cout << "The name without vowels is: " << result;
}