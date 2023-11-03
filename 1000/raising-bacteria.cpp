#include <bits/stdc++.h>
using namespace std;

bool is1(int n, int k) {
    return (n >> k) & 1;
}

int main() {
    int x, c = 0;
    cin >> x;
    for (int i = 0; i < 32; i++) if(is1(x, i)) c++;
    cout << c;
}