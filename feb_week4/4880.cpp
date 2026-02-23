#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    while (true) {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) break;
        if (c - b == b - a)
            cout << "AP " << 2 * c - b << endl;
        else
            cout << "GP " << c * (b / a) << endl;
    }
    return 0;
}