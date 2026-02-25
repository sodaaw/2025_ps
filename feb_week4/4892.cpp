#include <iostream>
using namespace std;

int main() {
    int n0;
    int count = 0;

    int n1, n2, n3, n4;
    while (true) {
        cin >> n0;
        if (n0 == 0) break;

        cout << count + 1 << ". ";
        count++;

        n1 = 3 * n0;
        if (n1 % 2 == 0) {
            cout << "even ";
            n2 = n1 / 2;
        }
        else {
            cout << "odd ";
            n2 = (n1 + 1) / 2;
        }

        n3 = 3 * n2;
        n4 = n3 / 9;
        cout << n4 << endl;
    }
    return 0;
}