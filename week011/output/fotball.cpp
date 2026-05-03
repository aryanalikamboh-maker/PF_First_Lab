#include <iostream>
using namespace std;

int main() {
    char field[7][17] = {
        "                ",
        " #            # ",
        " #     O      # ", 
        " #            # ",
        " ############## ",
        "                ",
        "                "
    };

    int i = 2;
    int j = 7;

    bool goal = false;

    if (i >= 1 && i <= 3 && j >= 2 && j <= 13) {
        goal = true;
    }

    if (goal)
        cout << "yes it goals" << endl;
    else
        cout << "no it goals" << endl;

    return 0;
}