#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int time[101] = {0};
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;

        for (int j = x; j < y; j++)
            time[j]++;
    }

    int fee = 0;
    for (int i = 1; i <= 100; i++) {
        if (time[i] == 1)
            fee += a;
        else if (time[i] == 2)
            fee += 2 * b;
        else if (time[i] == 3)
            fee += 3 * c;
    }

    cout << fee << endl;
    return 0;
}