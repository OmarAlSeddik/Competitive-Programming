#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int total;
    int grades[4];
};

bool compareByTotal(Student a, Student b) {
    if (abs(a.total - b.total) > 10) return a.total > b.total;
    return a.name < b.name;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name;
        a[i].total = 0;
        for (int j = 0; j < 4; j++) {
            cin >> a[i].grades[j];
            a[i].total += a[i].grades[j];
        }
    }
    sort(a, a + n, compareByTotal);
    for (int i = 0; i < n; i++) {
        if (i) cout << "\n";
        cout << a[i].name << " " << a[i].total;
        for (int j = 0; j < 4; j++) cout << " " << a[i].grades[j];
    }
    return 0;
}