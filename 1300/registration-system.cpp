#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> passwords;
    vector<string> output;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (passwords.find(s) == passwords.end()) {
            passwords[s] = 1;
            output.push_back("OK");
        }
        else {
            output.push_back(s + to_string(passwords[s]));
            passwords[s] += 1;
        }
    }
    for (int i = 0; i < output.size(); i++) {
        if (!i) cout << output[i];
        else cout << "\n" << output[i];
    }
    return 0;
}