#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    unordered_set<int> mySet;
    while (q--) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "lower_bound") {
            auto it = lower_bound(mySet.begin(), mySet.end(), x);
            if (it != mySet.end()) cout << distance(mySet.begin(), it) + 1 << "\n";
            else cout << -1 << "\n";
        }
        else if (s == "upper_bound") {
            auto it = upper_bound(mySet.begin(), mySet.end(), x);
            if (it != mySet.end()) cout << distance(mySet.begin(), it) + 1 << "\n";
            else cout << -1 << "\n";
        }
        else if (s == "find") {
            if (mySet.find(x) != mySet.end()) cout << "found\n";
            else cout << "not found\n";
        }
        else if (s == "insert") mySet.insert(x);
    }
    return 0;
}