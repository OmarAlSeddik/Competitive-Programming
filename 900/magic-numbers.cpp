#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool isMagic = true;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '4' && s[i] != '1'){
            isMagic = false;
            break;
        } else if (s[i] == '4') {
            if (i == 0) {
                isMagic = false;
                break;
            }
            else if (i == 1 && s[i-1] != '1') {
                isMagic = false;
                break;
            } else if (s[i-1] != '1' && s[i-2] != '1') {
                isMagic = false;
                break;
            }
        }
    }

    isMagic ? cout << "YES" : cout << "NO";
    return 0;
}