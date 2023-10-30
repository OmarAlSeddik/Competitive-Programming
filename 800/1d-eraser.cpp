#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int answers[t];
    for (int i = 0; i < t; i++) {
        int n, k, count = 0;
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                count++;
                i += (k-1);
            }
        }
        answers[i] = count;
    }
    for (int i = 0; i < t; i++) {
        if (!i) cout << answers[i];
        else cout << "\n" << answers[i];
    }
    return 0;
}