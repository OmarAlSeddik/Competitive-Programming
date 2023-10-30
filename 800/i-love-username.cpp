#include <iostream>
using namespace std;

int main() {
    int n, largest, smallest, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == 0) {
            largest = x;
            smallest = x;
        } else {
            if (x > largest) {
                largest = x;
                count++;
            } else if (x < smallest) {
                smallest = x;
                count++;
            }
        }
    }

    cout << count;
    return 0;
}