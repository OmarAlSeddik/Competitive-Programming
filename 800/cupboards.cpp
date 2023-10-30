#include <iostream>
using namespace std;

int main () {
    int n, leftOpen = 0, rightOpen = 0, seconds = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if (l) leftOpen++;
        if (r) rightOpen++;
    }

    seconds += leftOpen > n / 2 ? n - leftOpen : leftOpen;
    seconds += rightOpen > n / 2 ? n - rightOpen : rightOpen; 
    cout << seconds;
    return 0;
}