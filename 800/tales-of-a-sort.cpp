#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> output;
    while (t--) {
        int n, answer = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i && a[i-1] > a[i] && a[i-1] > answer) {
                answer = a[i-1];
            }
        }
        output.push_back(answer);
    }
    for (int i = 0; i < output.size(); i++) {
        if (!i) cout << output[i];
        else cout << "\n" << output[i];
    }
    return 0;
}