#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int countA = 0, countB = 0, countC = 0;
        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
                case 'A':
                    countA++;
                    break;
                case 'B':
                    countB++;
                    break;
                case 'C':
                    countC++;
                    break;
            }
        }
        if (countB == countA + countC) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}