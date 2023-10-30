#include <bits/stdc++.h>
using namespace std;

int main() {
    mpz_class number("12345678901234567890.14569");
    mpz_class roundedNumber = ceil(number);

    std::cout << "Original number: " << number << std::endl;
    std::cout << "Rounded up number: " << roundedNumber << std::endl;

    return 0;
}

