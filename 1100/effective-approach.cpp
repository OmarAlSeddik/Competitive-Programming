#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long long vasya = 0, petya = 0;
    unordered_map<int, int> indexOf;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        indexOf[x] = i;
    };

    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        int index = indexOf[x];
        vasya += index + 1;
        petya += n - index;
    }

    cout << vasya << " " << petya;
    return 0;
}