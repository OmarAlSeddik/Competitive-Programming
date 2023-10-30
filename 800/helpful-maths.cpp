#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<char> digits;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') digits.push_back(s[i]);
    }

    sort(digits.begin(), digits.end());
    int j = 0;

    for (int i = 0; i < s.length(); i++) {
        if (i%2) cout << "+";
        else {
            cout << digits[j];
            j++;
        }
    }

    return 0;
}