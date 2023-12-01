#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> v, out;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    while (q--) {
        string s;
        cin >> s;
        if (s == "pop_back") v.pop_back();
        else if (s == "front") out.push_back(v.front());
        else if (s == "back") out.push_back(v.back());
        else if (s == "sort") {
            int l, r;
            cin >> l >> r;
            sort(v.begin()+l-1, v.begin()+r);
        }
        else if (s == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(v.begin()+l-1, v.begin()+r);
        }
        else if (s == "print") {
            int pos;
            cin >> pos;
            out.push_back(v[pos-1]);
        }
        else if (s == "push_back") {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }
    for (int i = 0; i < out.size(); i++) {
        if (i) cout << "\n";
        cout << out[i];
    }
    return 0;
}