#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    int longest = -1;
    unordered_set<string> aSubs;
    unordered_set<string> bSubs;
    for (int i = 0; i < s1.size(); i++) {
        for (int j = i; j < s1.size(); j++) {
            aSubs.insert(s1.substr(i, j-i+1));
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        for (int j = i; j < s2.size(); j++) {
            bSubs.insert(s2.substr(i, j-i+1));
        }
    }
    for (int i = 0; i < s1.size(); i++) {
        for (int j = i; j < s1.size(); j++) {
            string aSub = s1.substr(i, j-i+1);
            int x = aSub.length();
            if (bSubs.find(aSub) == bSubs.end()) longest = max(longest, x);
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        for (int j = i; j < s2.size(); j++) {
            string bSub = s2.substr(i, j-i+1);
            int x = bSub.length();
            if (aSubs.find(bSub) == aSubs.end()) longest = max(longest, x);
        }
    }
    cout << longest;
    return 0;
}