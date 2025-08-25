#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long a, b;
        cin >> a >> b;

        long long g = gcd(a, b);
        long long lcm = a / g * b;

        cout << lcm << "\n";
    }
    return 0;
}