#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, n;
    int sum = 0;

    while (cin >> s) {
        for (char c : s) {
            if (c == ',') {
                sum += stoi(n);
                n.clear();
            }
            else n.push_back(c);
        }
    }

    if (!n.empty()) sum += stoi(n);
    cout << sum << endl;
    
    return 0;
}