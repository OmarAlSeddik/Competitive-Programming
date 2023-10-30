#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int values[3] = {k * l / nl, c * d, p / np};
    int minValue = *min_element(values, values + 3) / n;
    cout << minValue;
    return 0;
}