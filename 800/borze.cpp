#include <iostream>
using namespace std;

int main () {
    string s, answer;
    cin >> s;
    int i = 0;
    
    while (i < s.length()) {
        if (s[i] == '.') {
            answer += '0';
        }
        else if (s[i] == '-') {
            if (s[i+1] == '-') {
                answer += '2';
            }
            else {
                answer += '1';
            }
            i++;
        }
        i++;
    }

    cout << answer;
    return 0;
}