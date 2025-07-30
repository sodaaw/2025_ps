#include <iostream>
using namespace std;

int main() {
    int a_win = 0, b_win = 0;
    int a_cards[10], b_cards[10];

    for (int i = 0; i < 10; i++) cin >> a_cards[i];
    for (int i = 0; i < 10; i++) cin >> b_cards[i];

    for (int i = 0; i < 10; i++) {
        if (a_cards[i] > b_cards[i]) a_win++;
        else if (a_cards[i] == b_cards[i]) continue;
        else b_win++;
    }

    if (a_win > b_win) cout << "A" << endl;
    else if (b_win > a_win) cout << "B" << endl;
    else cout << "D" << endl;

    return 0;
}