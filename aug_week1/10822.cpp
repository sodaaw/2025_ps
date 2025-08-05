#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    string num = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',') {
            count += stoi(num);
            num = "";
        }
        else num += s[i];
    }

    count += stoi(num);
    cout << count << endl;
    return 0;
}