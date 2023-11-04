#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int value = (s[0] - '1') * 10;
        switch (s.length()) {
            case 1:
                value++;
                break;
            case 2:
                value += 3;
                break;
            case 3:
                value += 6;
                break;
            case 4:
                value += 10;
                break;
        }
        cout << value;
        if (t) cout << "\n";
    }
    return 0;
}