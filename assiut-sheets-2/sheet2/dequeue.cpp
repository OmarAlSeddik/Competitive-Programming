#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    deque<int> deque;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push_back") {
            int x;
            cin >> x;
            deque.push_back(x);
        }
        else if (s == "push_front") {
            int x;
            cin >> x;
            deque.push_front(x);
        }
        else if (s == "pop_front") deque.pop_front();
        else if (s == "pop_back") deque.pop_back();
        else if (s == "front") cout << deque.front() << "\n";
        else if (s == "back") cout << deque.back() << "\n";
        else if (s == "print") {
            int x;
            cin >> x;
            cout << deque[x-1] << "\n";
        }
    }
    return 0;
}