#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << "Pairs for " << n << ":";

        bool isFirst = true;
        for (int i = 1; i * 2 < n; ++i) {
            int j = n - i;

            if (isFirst) {
                cout << " ";
                isFirst = false;
            }
            else cout << ", ";

            cout << i << " " << j;
        }
        cout << "\n";
    }
    return 0;
}