#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int counter = 1, longest = 1;
    cin >> s;
    for (int i = 1; i < s.length(); i++) {
        (s[i] == s[i-1]) ? counter++ : counter = 1;
        longest = max(longest, counter);
    }
    (longest > 6) ? cout << "YES" : cout << "NO";
    return 0;
}