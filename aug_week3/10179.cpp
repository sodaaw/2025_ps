#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        double price;
        cin >> price;

        price *= 0.8;
        cout << "$" << fixed << setprecision(2) << price << endl;
    }
    return 0;
}