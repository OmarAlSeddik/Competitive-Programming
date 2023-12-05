#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    unordered_map<char, int> map;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != ' ') map[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] != ' ') {
            if (map[s2[i]]) map[s2[i]]--;
            else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}