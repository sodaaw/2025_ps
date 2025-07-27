#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count_a = 0, count_b = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if (a > b) count_a++;
        else if (a < b) count_b++;
    }

    cout << count_a << " " << count_b << endl;
    return 0;
}