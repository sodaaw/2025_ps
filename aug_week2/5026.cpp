#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string q;
        cin >> q;

        if (q == "P=NP") cout << "skipped" << endl;
        else {
            int plusPos = q.find('+');
            int a = stoi(q.substr(0, plusPos));
            int b = stoi(q.substr(plusPos + 1));
            cout << a + b << endl;
        }
    }

    return 0;
}