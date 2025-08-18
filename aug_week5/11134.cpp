#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        if (n % c != 0) 
            cout << n / c + 1 << endl;
        else
            cout << n / c << endl;
    }
    return 0;
}