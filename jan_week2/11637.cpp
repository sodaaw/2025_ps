#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int v[n];
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        int maxV = v[0];
        for (int j = 1; j < n; j++) {
            if (v[j] > v[j - 1]) maxV = v[j];
        }

        if (maxV )
    }

    return 0;
}