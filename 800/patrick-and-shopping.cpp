#include <bits/stdc++.h>
using namespace std;

int main() {
    int d[3], path1 = 0, path2 = 0;
    cin >> d[0] >> d[1] >> d[2];
    sort(d, d+3);
    for (int i = 0; i < 3; i++) {
        path1 += d[i];
        if (i != 2) path2 += d[i] * 2;
    }
    cout << min(path1, path2);
    return 0;
}