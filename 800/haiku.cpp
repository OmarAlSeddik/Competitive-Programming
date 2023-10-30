#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3, vowels = "aeiou";
    int c1 = 0, c2 = 0, c3 = 0;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    for (int i = 0; i < s1.size(); i++) {
        if (vowels.find(s1[i]) != string::npos) c1++;
    } 
    for (int i = 0; i < s2.size(); i++) {
        if (vowels.find(s2[i]) != string::npos) c2++;
    }
    for (int i = 0; i < s3.size(); i++) {
        if (vowels.find(s3[i]) != string::npos) c3++;
    }
    if (c1 != 5 || c2 != 7 || c3 != 5) cout << "NO";
    else cout << "YES";
    return 0;
}