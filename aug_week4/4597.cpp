#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string s;
        cin >> s;

        if (s == "#") break;

        int ones = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1') ones++;
        }

        if (s.back() == 'e') {
            if (ones % 2 == 0) s.back() = '0';
            else s.back() = '1';
        }
        else if (s.back() == 'o') {
            if (ones % 2 == 0) s.back() = '1';
            else s.back() = '0';
        }
        cout << s << "\n";
    }
    return 0;
}