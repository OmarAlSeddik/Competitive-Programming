#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, count = 0;
    string s;
    vector<int> v;
    cin >> k >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'B') count++;
        else {
            if (count) v.push_back(count);
            count = 0;
        }
    }
    if (count) v.push_back(count);
    cout << v.size();
    if (v.size()) cout << "\n";
    for (int i = 0; i < v.size(); i++) {
        if (!i) cout << v[i];
        else cout << " " << v[i];
    }
    return 0;
}