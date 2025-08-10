#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string sentence;
        getline(cin, sentence);

        if (sentence == "*") break;

        bool abc[26] = {false};
        for (char c : sentence) {
            if ('a' <= c && c <= 'z') 
                abc[c - 'a'] = true;
        }

        bool pangram = true;
        for (int i = 0; i < 26; i++) {
            if (!abc[i]) {
                pangram = false;
                break;
            }
        }
        if (pangram) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}