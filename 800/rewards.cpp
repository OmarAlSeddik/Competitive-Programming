#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a = 0, b = 0, n;
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        a+=x;
    }
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        b+=x;
    }
    cin >> n;
    a = ceil((double)a/5);
    b = ceil((double)b/10);
    if (a+b > n) cout << "NO";
    else cout << "YES";
    return 0;
}