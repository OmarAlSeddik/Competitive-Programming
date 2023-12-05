#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    string s, sorted;
    unordered_map<char, int> map;
    cin >> n >> k >> s;
    sorted = s;
    sort(sorted.begin(), sorted.end());
    sorted = sorted.substr(k);
    for (int i = 0; i < sorted.length(); i++) map[sorted[i]]++;
    for (int i = 0; i < s.length(); i++) map[s[i]]--;
    for (int i = 0; i < s.length(); i++) {
        if (map[s[i]] > -1) cout << s[i];
        else map[s[i]]++;
    }
    return 0;
}