#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string s;
        getline(cin, s);

        if (s == "#") break;

        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            int pos = i + 1;
            int val = 0;

            if (c != ' ')
                val = c - 'A' + 1;

            sum += pos * val;
        }
        cout << sum << "\n";
    }

    return 0;
}