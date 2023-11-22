#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    map<char, int> charCount;
    for (int i = 0; i < s.length(); i++) {
        charCount[s[i]]++;
    }
    for (auto it = charCount.begin(); it != charCount.end(); it++) {
        if (it != charCount.begin()) cout << "\n";
        cout << it->first << " " << it->second;
    }
    return 0;
}