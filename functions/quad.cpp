#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n1, n2, n3;
    cout << "Enter coefficients (n1 n2 n3): ";
    cin >> n1 >> n2 >> n3;

    double D = n2*n2 - 4*n1*n3;

    if (D > 0) {
        // Two real and distinct roots
        double r1 = (-n2 + sqrt(D)) / (2*n1);
        double r2 = (-n2 - sqrt(D)) / (2*n1);
        cout << "Roots are real and different:\n";
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;
    }
    else if (D == 0) {
        // One real root (repeated)
        double r = -n2 / (2*n1);
        cout << "Roots are real and same:\n";
        cout << "r1 = r2 = " << r << endl;
    }
    else {
        // Imaginary roots
        double realPart = -n2 / (2*n1);
        double imagPart = sqrt(-D) / (2*n1);

        cout << "Roots are imaginary:\n";
        cout << "r1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "r2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}