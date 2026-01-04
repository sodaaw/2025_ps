#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        bool abc[26] = {false};

        for (int i = 0; i < s.length(); i++) {
            if (abc[s[i] - 'A'] == 0)
                abc[s[i] - 'A'] = true;
        }

        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (abc[i] == false) count += ('A' + i);
        }
        cout << count << endl;
    }
    return 0;
}