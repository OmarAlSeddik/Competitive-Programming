#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count1 = 0, count2 = 0, count3 = 0, count4 = 0, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) count1++;
        if (x == 2) count2++;
        if (x == 3) count3++;
        if (x == 4) count4++;
    }
    while (count4) {
        count4--;
        total++;
    }
    while (count1 && count3) {
        count1--;
        count3--;
        total++;
    }
    while (count3) {
        count3--;
        total++;
    }
    while (count1 && count2) {
        if (count1 == 1) count1--;
        else count1 -= 2;
        count2--;
        total++;
    }
    while (count2) {
        if (count2 == 1) count2--;
        else count2 -= 2;
        total++;
    }
    while (count1) {
        if (count1 > 3) count1 -= 4;
        else if (count1 == 3) count1 -= 3;
        else if (count1 == 2) count1 -= 2;
        else count1--;
        total++;
    }
    cout << total;
    return 0;
}