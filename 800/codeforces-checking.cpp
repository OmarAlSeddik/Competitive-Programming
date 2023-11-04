#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<char> s = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    int t;
    cin >> t;
    while (t--) {
        char x;
        cin >> x;
        if (s.count(x)) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}