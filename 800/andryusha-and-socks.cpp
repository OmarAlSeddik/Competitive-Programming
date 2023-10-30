#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0, max = 0;
    cin >> n;
    unordered_map<int, int> socks;
    for (int i = 0; i < n * 2; i++) {
        int x;
        cin >> x;
        if (socks[x]) count--;
        else {
            count++;
            if (count > max) max = count;
        }
        socks[x]++;
    }
    cout << max;
    return 0;
}