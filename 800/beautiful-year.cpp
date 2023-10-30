#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    int y;
    cin >> y;

    for (int year = y+1; year < 10000; year++) {
        string yearStr = to_string(year);
        unordered_set<char> yearSet;

        for (char digit : yearStr) {
            yearSet.insert(digit);
        }

        if (yearSet.size() == 4) {
            cout << year;
            break;
        }
    }

    return 0;
}