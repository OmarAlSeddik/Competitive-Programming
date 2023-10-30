#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> a;
    
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        a.push_back(input);
    };

    cin >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        if (x != 0) a[x-1] += y - 1;
        if (x != n) a[x+1] += (a[x] - y);
        a[x] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}