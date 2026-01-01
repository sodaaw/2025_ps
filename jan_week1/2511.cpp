#include <iostream>
using namespace std;

int main() {

    int a[10], b[10];

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++) 
        cin >> b[i];

    int a_score = 0, b_score = 0;
    char winner = 'D';

    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) {
            a_score += 3;
            winner = 'A';
        }
        else if (a[i] < b[i]) {
            b_score += 3;
            winner = 'B';
        }
        else {
            a_score++;
            b_score++;
        }

    }

    cout << a_score << " " << b_score << endl;

    if (a_score > b_score) cout << "A\n";
    else if (a_score < b_score) cout << "B\n";
    else cout << winner << endl;

    return 0;
}