#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = sqrt(a * b / c);
    int y = sqrt(a * c / b);
    int z = sqrt(b * c / a);
    cout << (x + y + z) * 4;
    return 0;
}