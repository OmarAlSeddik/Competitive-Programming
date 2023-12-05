#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    queue<int> queue;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            int x;
            cin >> x;
            queue.push(x);
        } 
        else if (s == "pop") queue.pop();
        else if (s == "front") cout << queue.front() << "\n";
        else if (s == "back") cout << queue.back() << "\n";
    }
    return 0;
}