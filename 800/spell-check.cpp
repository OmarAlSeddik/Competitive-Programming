#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> set1({'T', 'i', 'm', 'u', 'r'});
        unordered_set<char> set2;
        for (int i = 0; i < n; i++) set2.insert(s[i]);
        if (n == 5 && set1 == set2) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}