#include <iostream>
using namespace std;

void calculate(double pool, double pipe1, double pipe2, double hours)
{
    double total_flow = (pipe1 + pipe2) * hours;

    if (total_flow <= pool)
    {
        double percent_filled = (total_flow / pool) * 100;
        double p1 = (pipe1 * hours / total_flow) * 100;
        double p2 = (pipe2 * hours / total_flow) * 100;

        cout << "The pool is " << percent_filled << "% full" << endl;
        cout << "Pipe 1 contributes " << p1 << "% of total flow" << endl;
        cout << "Pipe 2 contributes " << p2 << "% of total flow" << endl;
    }
    else
    {
        cout << "Pool is overflowing after " << hours << " hours." << endl;
    }
}

int main()
{
    double pool, pipe1, pipe2, hours;

    cout << "Enter pool volume (litres): ";
    cin >> pool;

    cout << "Enter flow rate of 1st pipe (litres/hour): ";
    cin >> pipe1;

    cout << "Enter flow rate of 2nd pipe (litres/hour): ";
    cin >> pipe2;

    cout << "Enter hours worker is absent: ";
    cin >> hours;

    calculate(pool, pipe1, pipe2, hours);

    return 0;
}