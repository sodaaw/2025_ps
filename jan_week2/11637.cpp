#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        int sum = 0;

        for (int j = 0; j < n; j++) {
            cin >> v[j];
            sum += v[j];
        }

        int maxV = v[0];
        int winner = 1;

        for (int j = 1; j < n; j++) {
            if (v[j] > maxV) {
                maxV = v[j];
                winner = j + 1;
            }
        }

        int countMax = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] == maxV) countMax++;
        }

        if (countMax > 1) cout << "no winner\n";
        else {
            if (maxV > sum / 2) cout << "majority winner " << winner << endl;
            else cout << "minority winner " << winner << endl;
        }
    }

    return 0;
}