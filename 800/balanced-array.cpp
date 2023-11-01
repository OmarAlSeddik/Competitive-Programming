#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, count = 0;
        cin >> x;
        if (x % 4) cout << "NO";
        else {
            cout << "YES";
            cout << "\n";
            int sum = 0;
            for (int i = 0; i < x/2; i++) {
                sum += (i+1)*2;
                if (i) cout << " ";
                cout << (i+1)*2;
            }
            for (int i = 0; i < x/2; i++) {
                sum -= i*2+1;
                if (i==x/2-1) cout << " " << i*2+1+sum;
                else cout << " " << i*2+1;
            }
        }
        if (t) cout << "\n";
    }
    return 0;
}