#include <iostream>
using namespace std;

int main () {
    int oddCount[3][3] = {{0,0,0}, {0,0,0}, {0,0,0}};

    for (int i = 0; i < 3; i++) {
        int row[3];
        cin >> row[0] >> row[1] >> row[2];
        for (int j = 0; j < 3; j++) {
            if (row[j] % 2) {
                oddCount[i][j]++;
                if (i > 0) oddCount[i-1][j]++;
                if (i < 2) oddCount[i+1][j]++;
                if (j > 0) oddCount[i][j-1]++;
                if (j < 2) oddCount[i][j+1]++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << (oddCount[i][0] + 1) % 2 << (oddCount[i][1] + 1) % 2 << (oddCount[i][2] + 1) % 2 << endl;
    }

    return 0;
}