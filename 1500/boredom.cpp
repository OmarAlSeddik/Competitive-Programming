#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum1 = 0, sum2 = 0, toggle = true;
    cin >> n;
    map<int, int> hashMap;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        hashMap[x]++;
    }
    for (auto it = hashMap.begin(); it != hashMap.end(); it++) {
        if (toggle) sum1 += it->first * it->second;
        else sum2 += it->first * it->second;
        toggle = !toggle;
    }
    cout << max(sum1, sum2);
    return 0;
}