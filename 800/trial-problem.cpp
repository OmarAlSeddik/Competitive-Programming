#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> answers;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        answers.push_back(x + y);
    }
    for (int i = 0; i < t; i++) {
        if (!i) cout << answers[i];
        else cout << "\n" << answers[i];
    }
    return 0;
}