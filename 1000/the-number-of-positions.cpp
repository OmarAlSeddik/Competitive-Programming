#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, answer;
    cin >> n >> a >> b;
    answer = n - a;
    answer = min(answer, b + 1);
    cout << answer;
    return 0;
}