#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    string s1, s2;
    cin.ignore();
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < n; i++) {
        int diff = abs(int(s1[i]) - int(s2[i]));
        if (diff > 5) diff = 10 - diff;
        count += diff;
    }
    cout << count;
    return 0;
}