#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int s[4], count = 0;
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    unordered_map<int, bool> map;

    for (int i = 0; i < 4; i++) {
        if (map[s[i]]) count++;
        else map[s[i]] = true;
    }

    cout << count;
    return 0;
}