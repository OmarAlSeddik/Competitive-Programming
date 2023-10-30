#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, counter = 0;
    cin >> n;
    int a[n][2];

    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }

    for (int i = 0; i < n; i++) {
        bool left = false;
        bool right = false;
        bool top = false;
        bool bottom = false;

        for (int j = 0; j < n; j++) {
            if (a[i][0] == a[j][0]) {
                if (a[i][1] < a[j][1]) top = true;
                else if (a[i][1] > a[j][1]) bottom = true;
            } else if (a[i][1] == a[j][1]) {
                if (a[i][0] < a[j][0]) right = true;
                else if (a[i][0] > a[j][0]) left = true;
            }
        }

        if (left && right && top && bottom) counter++;
    }

    cout << counter;
    return 0;
}