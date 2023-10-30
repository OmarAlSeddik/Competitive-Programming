#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int upperCount = 0;
    int lowerCount = 0;

    for (char c : s) {
        if (isupper(c)) upperCount++;
        else lowerCount++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (upperCount > lowerCount && islower(s[i])) {
            s[i] = toupper(s[i]);
        } else if (lowerCount >= upperCount && isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return 0;
}