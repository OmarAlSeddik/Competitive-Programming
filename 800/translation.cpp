#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[t.length() - i - 1]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}