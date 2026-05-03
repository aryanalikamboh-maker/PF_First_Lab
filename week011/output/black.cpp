#include <iostream>
using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '#'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};

bool isBlackHole = true;

void displayWorld() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << objects[i][j] << " ";
        cout << endl;
    }
    cout << "-----" << endl;
}

void timeTick() {
    for (int r = 3; r >= 0; r--) {
        for (int c = 0; c < 5; c++) {
            if (objects[r][c] == '#') {
                objects[r][c] = '-';

                if (r == 4 && isBlackHole)
                    objects[0][c] = '#';
                else
                    objects[r + 1][c] = '#';
            }
        }
    }
}

int main() {
    displayWorld();
    timeTick();
    displayWorld();
    return 0;
}