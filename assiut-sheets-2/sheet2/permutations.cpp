#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    string s;
    cin >> n >> q;
    cin >> s;
    while (q--) {
        string x;
        int y;
        cin >> x >> y;
        if (x == "next_permutation") {
            while (y--) next_permutation(s.begin(), s.end());
            cout << s;
        }
        else {
            while (y--) prev_permutation(s.begin(), s.end());
            cout << s;
        }; 
        if (q) cout << "\n";
    }
    return 0;
}