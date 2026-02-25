#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        for (int j = 0; j < name.length(); j++) {
            if (name[j] == 'Z') name[j] = 'A';
            else name[j] += 1;
        }
        cout << "String #" << i + 1 << endl;
        cout << name << endl;

        if (i != n) cout << endl;
    }
    return 0;
}