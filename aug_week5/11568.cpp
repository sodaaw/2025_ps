#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int k;
    cin >> k;

    if (k == 3) {
        for (int i = n - 1; i >= 0; i--) {
            cout << s[i] << "\n";
        }
    }
    else if (k == 2) {
        for (int i = 0; i < n; i++) {
            for (int j = (int)s[i].size() - 1; j >= 0; --j) 
                cout << s[i][j];
            cout << "\n";
        }
    }
    else 
        for (int i = 0; i < n; i++) {
            cout << s[i] << "\n";
        }

    return 0;
}