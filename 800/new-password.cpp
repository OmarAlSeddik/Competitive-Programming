#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string answer;

    for (int i = 0; i < n; i++) {
        char c = char(96 + k);
        answer += c;
        k == 1 ? k++ : k--;
    }

    cout << answer;
    return 0;
}