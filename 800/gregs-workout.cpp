#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, chest = 0, biceps = 0, back = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        switch(i%3) {
            case 0:
                chest += x;
                break;
            case 1:
                biceps += x;
                break;
            case 2:
                back += x;
                break;
        }
    }
    if (chest > biceps) {
        if (chest > back) cout << "chest";
        else cout << "back";
    } else {
        if (biceps > back) cout << "biceps";
        else cout << "back";
    }
    return 0;
}