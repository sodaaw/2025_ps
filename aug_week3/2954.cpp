#include <iostream>
#include <string>
using namespace std;

bool isVow(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string sen;
    getline(cin, sen);

    string answer;
    for (size_t i = 0; i < sen.length();) {
        char current = sen[i];
        answer.push_back(current);

        if (isVow(current)) i += 3;
        else i += 1;
    }
    cout << answer << endl;
    return 0;
}