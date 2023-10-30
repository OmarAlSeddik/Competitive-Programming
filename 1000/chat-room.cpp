#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, hello = "hello";
    int index = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == hello[index]) index++;
        if (index == 5) break;
    }
    (index == 5) ? cout << "YES" : cout << "NO";
    return 0;
}