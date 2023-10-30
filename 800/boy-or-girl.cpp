#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    unordered_set<char> set;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        set.insert(s[i]);
    }

    if (set.size()%2) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}