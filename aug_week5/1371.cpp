#include <iostream>
using namespace std;

int main() {
    string s;

    int abc[26] = {0};
    while (getline(cin, s)) {
        for (char c : s) {
            abc[c - 'a']++;
        }
    }

    int m = 0;
    for (int i = 0; i < 26; i++) {
        if (abc[i] > m) m = abc[i];
    }

    for (int i = 0; i < 26; i++) {
        if (abc[i] == m) cout << char('a' + i);
    }
    cout << "\n";

    return 0;
}