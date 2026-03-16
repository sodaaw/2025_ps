#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        int count[26] = {0};

        for (int j = 0; j < s.length(); j++) {
            // 알파벳인지 확인한 후에 카운트하기 위해 조건문
            if (isalpha(s[j])) {
                s[j] = tolower(s[j]);   // 소문자 변환 tolower(문자)
                count[s[j] - 97]++;
            }
        }

        int minNum = count[0];  // 어떤 팬그램인지 판별하기 위한 변수
        for (int j = 0; j < 26; j++) {
            minNum = min(minNum, count[j]);
        }

        cout << "Case " << i + 1 << ": ";
        if (minNum >= 3) cout << "Triple pangram!!!\n";
        else if (minNum >= 2) cout << "Double pangram!!\n";
        else if (minNum >= 1) cout << "Pangram!\n";
        else cout << "Not a pangram\n";
    }
    return 0;
}