#include <iostream>
using namespace std;

int main() {
    string s, output = "NO";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'H' ||
            s[i] == 'Q' ||
            s[i] == '9') {
                output = "YES";
                break;
        }
    }

    cout << output;
    return 0;
}