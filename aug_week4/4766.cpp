#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double prev, curr;
    cin >> prev;
    while (true) {
        cin >> curr;
        if (curr == 999) break;

        cout << fixed << setprecision(2) << curr - prev << endl;
        prev = curr;
    }

    return 0;
}