#include <iostream>
using namespace std;

int fact(int a) {
    int b = 1;
    for (int i = 1; i <= a; i++) {
        b *= i;
    }
    return b;
}

int main() {
    int n, k;
    cin >> n >> k;

    int answer = fact(n) / (fact(k) * fact(n - k));

    cout << answer << endl;

    return 0;
}