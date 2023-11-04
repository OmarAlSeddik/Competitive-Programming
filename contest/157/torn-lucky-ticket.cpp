#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    string pieces[n];
    for (int i = 0; i < n; i++) cin >> pieces[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((pieces[i].length() + pieces[j].length()) % 2 == 0) {
                string s = pieces[i] + pieces[j];
                int sum1 = 0;
                int sum2 = 0;
                for (int k = 0; k < s.length(); k++) {
                    if (k < s.length() / 2) {
                        sum1 += s[k] - '0';
                    } else sum2 += s[k] - '0';
                }
                if (sum1 == sum2) count++;
            }
        }
    }
    cout << count;
    return 0;
}