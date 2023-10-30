#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string answers[t];
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') answers[i] = "YES";
        else answers[i] = "NO";
    }
    for (int i = 0; i < t; i++) {
        if (!i) cout << answers[i];
        else cout << "\n" << answers[i];
    }
    return 0;
}