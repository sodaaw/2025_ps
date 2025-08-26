#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    cout << min(b + c, a + d) << "\n";
    return 0;
}