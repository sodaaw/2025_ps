#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int people = 0;

        for (int i = 0; i < n; i++) {
            int candy;
            cin >> candy;
            people += candy / k;
        }
        
        cout << people << "\n";
    }
    return 0;
}