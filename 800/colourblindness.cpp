#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool identical = true;
        for (int i = 0; i < s1.length(); i++) {
            if (!(s1[i] == s2[i] || s1[i] == 'B' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'B')) {
                identical = false;
                break;
            }
        }
        if (identical) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}