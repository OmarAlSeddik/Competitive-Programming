#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int h[n];
    unordered_map<int, int> awayCount;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> h[i] >> a;
        awayCount[a]++;
    }
    for (int i = 0; i < n; i++) {
        count += awayCount[h[i]];
    }
    cout << count;
    return 0;
}