#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    stack<int> stack;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            int x;
            cin >> x;
            stack.push(x);
        }
        else if (s == "pop") stack.pop();
        else if (s == "top") cout << stack.top() << "\n";
    }
    return 0;
}