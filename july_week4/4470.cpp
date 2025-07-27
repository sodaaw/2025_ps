#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string line[n];
    for (int i = 0; i < n; i++) {
        getline(cin, line[i]);
        cout << i + 1 << ". " << line[i] << endl;
    }

    return 0;
}