#include<iostream>
using namespace std;

void c(int base, int score, int experience)
{
    double bonus = 0;

    if (score >= 80)
    {
        bonus = base * 0.10;
    }
    else
    {
        bonus = base * 0.05;
    }

    if (experience >= 5)
    {
        bonus = bonus + base * 0.05;
    }

    double final_salary = base + bonus;

    cout << "Final salary is: " << final_salary << endl;
}

int main ()
{
    int base,score,experience;

    cout << "Enter base, score and experience: ";
    cin >> base >> score >> experience;

    c(base,score,experience);
}