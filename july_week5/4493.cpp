#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int count1 = 0, count2 = 0;
        string winner = "";
        for (int j = 0; j < n; j++) {
            char a, b;
            cin >> a >> b;

            if (a == b) continue;
            else if ((a == 'R' &&  b == 'S') || (a == 'S' && b == 'P') || (a == 'P' && b == 'R'))
                count1++;
            else
                count2++;

        }
        if (count1 > count2) cout << "Player 1" << endl;
        else if (count1 < count2) cout << "Player 2" << endl;
        else cout << "TIE" << endl;
    }

    return 0;
}