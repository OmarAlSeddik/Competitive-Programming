#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string guest, host, letters, answer = "YES";
    cin >> guest;
    cin >> host;
    cin >> letters;

    if (letters.length() != guest.length() + host.length()) {
        cout << "NO";
        return 0;
    }

    unordered_map<char, int> map;
    for (char c : letters) map[c]++;

    for (char c : guest) {
        if (map[c]) map[c]--;
        else {
            answer = "NO";
            break;
        }
    }

    for (char c : host) {
        if (map[c]) map[c]--;
        else {
            answer = "NO";
            break;
        }
    };

    cout << answer;
    return 0;
}