#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sums[] = {0, 0, 0};

    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        sums[0] += x;
        sums[1] += y;
        sums[2] += z;
    }

    if (sums[0] == 0 && sums[1] == 0 && sums[2] == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}