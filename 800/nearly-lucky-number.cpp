#include <iostream>
using namespace std;

bool isLucky (int n) {
    if (n == 0) return false;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 7 and digit != 4) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main () {
    long long n;
    int luckyCount = 0;
    cin >> n;

    for (char digit : to_string(n)) {
        if (digit == '4' || digit == '7') {
            luckyCount++;
        }
    }

    if (isLucky(luckyCount)) cout << "YES";
    else cout << "NO";
    return 0;
}