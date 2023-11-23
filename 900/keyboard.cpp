#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char shift;
    string s;
    cin >> shift >> s;
    unordered_map<char, char> mapL = {
    {'q', 'w'}, {'w', 'e'}, {'e', 'r'}, {'r', 't'}, {'t', 'y'}, {'y', 'u'}, {'u', 'i'}, {'i', 'o'}, {'o', 'p'}, {'p', 'p'},
    {'a', 's'}, {'s', 'd'}, {'d', 'f'}, {'f', 'g'}, {'g', 'h'}, {'h', 'j'}, {'j', 'k'}, {'k', 'l'}, {'l', ';'}, {';', ';'},
    {'z', 'x'}, {'x', 'c'}, {'c', 'v'}, {'v', 'b'}, {'b', 'n'}, {'n', 'm'}, {'m', ','}, {',', '.'}, {'.', '/'}, {'/', '.'},
    };
    unordered_map<char, char> mapR = {
    {'q', 'q'}, {'w', 'q'}, {'e', 'w'}, {'r', 'e'}, {'t', 'r'}, {'y', 't'}, {'u', 'y'}, {'i', 'u'}, {'o', 'i'}, {'p', 'o'},
    {'a', 'a'}, {'s', 'a'}, {'d', 's'}, {'f', 'd'}, {'g', 'f'}, {'h', 'g'}, {'j', 'h'}, {'k', 'j'}, {'l', 'k'}, {';', 'l'},
    {'z', 'z'}, {'x', 'z'}, {'c', 'x'}, {'v', 'c'}, {'b', 'v'}, {'n', 'b'}, {'m', 'n'}, {',', 'm'}, {'.', ','}, {'/', '.'},
    };
    if (shift == 'L') for (int i = 0; i < s.length(); i++) cout << mapL[s[i]];
    if (shift == 'R') for (int i = 0; i < s.length(); i++) cout << mapR[s[i]];
    return 0;
}