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
        int x = 0, y = 0;
        bool passes = false;
        for (int i = 0; i < s.length(); i++) {
            switch (s[i])
            {
            case 'U':
                y++;
                break;
            case 'R':
                x++;
                break;
            case 'D':
                y--;
                break;
            case 'L':
                x--;
                break;
            }
            if (x == 1 && y == 1) passes = true;
        }
        if (passes) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}