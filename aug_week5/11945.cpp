#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> shape(n);

    for (int i = 0; i < n; i++)
        cin >> shape[i];

    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; --j)
            cout << shape[i][j];
        cout << "\n";
    }

    return 0;
}