#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        double sum = a*350.34 + b*230.90 + c*190.55 + d*125.30 + e*180.90;
        cout << "$" << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}