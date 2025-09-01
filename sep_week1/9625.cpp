#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    long long A = 1, B = 0;
    while (k--) {
        long long newA = B;
        long long newB = A + B;

        A = newA;
        B = newB;
    }

    cout << A << " " << B << "\n";

    return 0;
}