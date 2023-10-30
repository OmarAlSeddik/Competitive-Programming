#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string code;
    cin >> code;
    for (int x = 1; x < n; x++) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (code[i] != s[i]) {
                code = code.substr(0, i);
                break;
            }
        }
    }
    cout << code.size();
    return 0;
}