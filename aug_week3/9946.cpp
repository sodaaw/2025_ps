#include <iostream>
#include <string>
using namespace std;

int main() {
    int caseNum = 1;
    while (true) {
        string word, abc;
        cin >> word;
        cin >> abc;

        if (word == "END" && abc == "END") break;

        int count1[26] = {0};
        for (char c : word) count1[c - 'a']++;

        int count2[26] = {0};
        for (char c : abc) count2[c - 'a']++;

        string answer = "same";
        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                answer = "different";
                break;
            }
        }
        cout << "Case " << caseNum++ << ": " << answer << endl;
    }
    return 0;
}