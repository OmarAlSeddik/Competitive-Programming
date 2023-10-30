#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> output;
    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a+c > b+c) output.push_back("First");
        else if (a+c < b+c) output.push_back("Second");
        else if (c%2) output.push_back("First");
        else output.push_back("Second");
    }
    for (int i = 0; i < output.size(); i++) {
        if (!i) cout << output[i];
        else cout << "\n" << output[i];
    }
    return 0;
}