#include <iostream>
using namespace std;

int main() {
    int n, current = 0, largest = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current += b;
        current -= a;
        if (current > largest) largest = current;
    }

    cout << largest;
    return 0;
}