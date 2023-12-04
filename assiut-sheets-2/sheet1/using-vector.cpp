#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> a;
    vector<int> out;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    while (q--) {
        string s;
        cin >> s;
        if (s == "pop_back") a.pop_back();
        else if (s == "front") out.push_back(a.front());
        else if (s == "back") out.push_back(a.back());
        else if (s == "sort") {
            int l, r;
            cin >> l >> r;
            sort(a.begin()+l-1, a.end()+r);
        } else if (s == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(a.begin()+l-1, a.end()+r);
        } else if (s == "print") {
            int x;
            cin >> x;
            out.push_back(a[x-1]);
        } else if (s == "push_back") {
            int x;
            cin >> x;
            a.push_back(x);
        }
    }
    for (int i = 0; i < out.size(); i++) {
        if (i) cout << "\n";
        cout << out[i];
    }
    return 0;
}
