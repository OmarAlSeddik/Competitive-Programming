#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    unordered_set<char> letters;
    for (int i = 1; i < s.length()-1; i++) {
        if (s[i] != ',' && s[i] != ' ') letters.insert(s[i]);
    }
    cout << letters.size();
    return 0;
}