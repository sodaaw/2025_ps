#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        double num;
        string unit;
        cin >> num >> unit;

        if (unit == "kg") 
            cout << fixed << setprecision(4) << num * 2.2046 << " lb" << endl;
        else if (unit == "lb") 
            cout << fixed << setprecision(4) << num * 0.4536 << " kg" << endl;
        else if (unit == "l")
            cout << fixed << setprecision(4) << num  * 0.2642 << " g" << endl;
        else 
            cout << fixed << setprecision(4) << num * 3.7854 << " l" << endl;
    }

    return 0;
}