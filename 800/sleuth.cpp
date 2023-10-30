#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, vowels = "aeiouyAEIOUY";
    int pos;
    getline(cin, s);
    for (int i = s.size()-1; i > -1; i--) {
        if (s[i] != '?' && s[i] != ' ') {
            pos = i;
            break;
        }
    }
    if (vowels.find(s[pos]) == string::npos) cout << "NO";
    else cout << "YES";
    return 0;
}