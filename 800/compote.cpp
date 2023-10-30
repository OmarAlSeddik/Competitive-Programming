#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, compotes;
    cin >> a >> b >> c;
    compotes = min(min(a, b/2), min(a, c/4));
    cout << compotes * 7;
    return 0;
}