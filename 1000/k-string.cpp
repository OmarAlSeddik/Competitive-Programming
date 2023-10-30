#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, noAnswer = false;
    string s, answer;
    int count[26];
    cin >> k >> s;
    for (int i = 0; i < 26; i++) count[i] = 0;
    for (int i = 0; i < s.length(); i++) {
        count[int(s[i]) - 97]++;
    }
    for (int z = 0; z < k; z++) {
        for (int i = 0; i < 26; i++) {
            if (count[i] % k != 0) {
                noAnswer = true;
                break;
            }
            for (int j = 0; j < count[i] / k; j++) {
                answer += char(i + 97);
            }
        }
        if (noAnswer) break;
    }
    if (noAnswer) cout << -1;
    else cout << answer;
    return 0;
}