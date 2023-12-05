#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    priority_queue<int> priority_queue;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            int x;
            cin >> x;
            priority_queue.push(x);
        }
        else if (s == "pop") priority_queue.pop();
        else if (s == "top") cout << priority_queue.top() << "\n";
    }
    return 0;
}