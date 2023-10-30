#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    vector<int> output;
    while (t--) {
        int n, swaps = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == i+1) swaps++;
        }
        swaps = ceil((double) swaps / 2);
        output.push_back(swaps);
    }
    for (int i = 0; i < output.size(); i++) {
        if (!i) cout << output[i];
        else cout << "\n" << output[i];
    }
    return 0;
}