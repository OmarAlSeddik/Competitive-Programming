#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pos = 97, counter = 0;

    for (int i = 0; i < s.length(); i++) {
        int diff = abs(int(s[i]) - pos);
        if (diff > 13) diff = 26 - diff;
        counter += diff;
        pos = int(s[i]);
    }

    cout << counter;
    return 0;
}