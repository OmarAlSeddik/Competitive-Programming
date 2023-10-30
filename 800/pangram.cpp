#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> uniqueCharacters;
    for (int i = 0; i < s.length(); i++) {
        uniqueCharacters.insert(tolower(s[i]));
    }
    if (uniqueCharacters.size() == 26) cout << "YES";
    else cout << "NO";
    return 0;
}