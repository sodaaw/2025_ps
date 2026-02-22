#include <iostream>
using namespace std;

int main() {
    int n;
    int answers[10];

    for (int i = 0; i < 10; i++) {
        answers[i] = (i % 5) + 1;
    }

    cin >> n;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            int x;
            cin >> x;

            if (x == answers[j]) count++;
        }

        if (count == 10) cout << i + 1 << endl;
    }

    return 0;
}