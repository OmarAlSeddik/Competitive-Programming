#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, v1 = 0, v2 = 0, v3 = 0;
    cin >> a >> b;
    for (int i = 1; i < 7; i++) {
        if (abs(a-i) < abs(b-i)) v1++;
        else if (abs(b-i) < abs(a-i)) v3++;
        else v2++;
    }
    cout << v1 << " " << v2 << " " << v3;
    return 0;
}