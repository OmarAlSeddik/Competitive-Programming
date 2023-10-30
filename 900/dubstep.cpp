#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool addedSpace = true;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (!addedSpace) {
                cout << " ";
                addedSpace = true;
            }
            i += 2;
        } else {
            cout << s[i];
            addedSpace = false;
        }
    }
    return 0;
}