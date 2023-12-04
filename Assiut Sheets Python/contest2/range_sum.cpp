#include <iostream>
#include <cstdlib>

long long calculateSum(long long L, long long R) {
    // Using the formula for sum of an arithmetic series
    long long n = abs(R - L) + 1;
    long long sum = (n * (L + R)) / 2;
    return sum;
}

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        long long L, R;
        std::cin >> L >> R;
        long long sum = calculateSum(L, R);
        std::cout << sum << std::endl;
    }

    return 0;
}