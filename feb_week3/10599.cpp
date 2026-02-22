#include <iostream>
using namespace std;

int main() {
    while (true) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;

        int shortest = c - b;
        int longest = d - a;

        cout << shortest << " " << longest << endl;
    }
    return 0;
}