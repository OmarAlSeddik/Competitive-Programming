#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, score1 = 0, score2 = 0;
    cin >> n;
    string team1 = "", team2 = "";

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (team1 == "") team1 = s;
        else if (team2 == "" && team1 != s) team2 = s;
        if (s == team1) score1++;
        else if (s == team2) score2++;
    }

    score1 > score2 ? cout << team1 : cout << team2;
    return 0;
}