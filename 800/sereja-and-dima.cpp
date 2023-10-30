#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cards[n];
    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    
    for (int i = 0; i < n; i++) cin >> cards[i];
    for (int i = 0; i < n; i++) {
        if (cards[right] > cards[left]) {
            (i%2) ? dima += cards[right] : sereja += cards[right];
            right--;
        } else {
            (i%2) ? dima += cards[left] : sereja += cards[left];
            left++;
        }
    }

    cout << sereja << " " << dima;
    return 0;
}