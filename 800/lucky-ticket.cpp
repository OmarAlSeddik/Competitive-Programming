#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum1 = 0, sum2 = 0;
    string x;
    cin >> n >> x;
    for (int i = 0; i < x.size()/2; i++) {
        if (x[i] != '4' && x[i] != '7') {
            cout << "NO";
            return 0;
        }
        sum1 += int(x[i] - '0');
    }
    for (int i = x.size()/2; i < x.size(); i++) {
        if (x[i] != '4' && x[i] != '7') {
            cout << "NO";
            return 0;
        }
        sum2 += int(x[i] - '0');
    }
    if (sum1 == sum2) cout << "YES";
    else cout << "NO";
    return 0;
}