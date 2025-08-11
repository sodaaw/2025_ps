#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string sen;
        getline(cin, sen);

        bool abc[26] = {false};

        for (char c : sen) {
            if (isalpha(c)) {
                char lowC = tolower(c);
                abc[lowC - 'a'] = true;
            }
        }

        bool pan = true;
        for (int j = 0; j < 26; j++) {
            if (!abc[j]) {
                pan = false;
                break;
            }
        }

        if (pan) cout << "pangram" << endl;
        else {
            cout << "missing ";
            for (int k = 0; k < 26; k++) {
                if (!abc[k]) cout << char('a' + k);
            }
            cout << endl;
        }
    }
    return 0;
}