#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, answer, vowels = "aeiouy";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (vowels.find(c) == string::npos) {
            answer += '.';
            answer += c;
        }
    }
    cout << answer;
    return 0;
}