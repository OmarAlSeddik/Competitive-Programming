#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() % 2) cout << "NO";
        else {
            if (s.substr(0, s.length() / 2) != s.substr(s.length() / 2, s.length() / 2)) cout << "NO";
            else cout << "YES";
        }
        if (t) cout << "\n";
    }   
    return 0;
}