#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, n, x, y;
        cin >> m >> n >> x >> y;

        int answer = -1;

        for (int k = x; k <= m * n; k += m) {
            if ((k - 1) % n + 1 == y) {
                answer = k;
                break;
            }
        }

        cout << answer << endl;
    }

    return 0;
}