#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int total;
    int grades[4];
};

bool compareByTotal(const Student& a, const Student& b) {
    return a.total > b.total;
}

bool compareByName(const Student& a, const Student& b) {
    return a.name < b.name;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        students[i].total = 0;
        cin >> students[i].name;
        for (int j = 0; j < 4; j++) {
            cin >> students[i].grades[j];
            students[i].total += students[i].grades[j];
        }
    }
    stable_sort(students, students+n, compareByName);
    stable_sort(students, students+n, compareByTotal);
    for (int i = 0; i < n; i++) {
        if (i) cout << "\n";
        cout << students[i].name << " " << students[i].total;
        for (int j = 0; j < 4; j++) cout << " " << students[i].grades[j];
    }
    return 0;
}