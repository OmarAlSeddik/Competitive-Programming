#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> output;
    for (int i = 0; i < t; i++) {
        int n, oddCount = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x%2) oddCount++;
        }
        if (oddCount%2) output.push_back("NO");
        else output.push_back("YES");
    }
    for (int i = 0; i < output.size(); i++) {
        if (!i) cout << output[i];
        else cout << "\n" << output[i];
    }
    return 0;
}