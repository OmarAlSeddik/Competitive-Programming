#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1 || c == 1) b++;
    if (b == 1) {
        if (a > c) c++;
        else a++;
    }
    cout << a * b * c;
    return 0;
}