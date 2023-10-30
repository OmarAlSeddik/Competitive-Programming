#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int shortest = 0;
    int longest = 0;
    int shortestIndex = 0;
    int longestIndex = 0;
    int swaps;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            shortest = a[i];
            longest = a[i];
            shortestIndex = i;
            longestIndex = i;
        } else {
            if (a[i] > longest) {
                longest = a[i];
                longestIndex = i;
            } else if (a[i] <= shortest) {
                shortest = a[i];
                shortestIndex = i;
            }
        }
    }

    swaps = longestIndex + (n - shortestIndex - 1);
    if (longestIndex > shortestIndex) swaps--;
    cout << swaps;
    return 0;
}