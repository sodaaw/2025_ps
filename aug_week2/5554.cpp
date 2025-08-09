#include <iostream>
using namespace std;

int main() {
    int sec[4];
    int x = 0, y = 0;
    for (int i = 0; i < 4; i++) {
        cin >> sec[i];
        y += sec[i];
        if (y >= 60) {
            x += y / 60;
            y %= 60;
        }
    }
    
    cout << x << endl;
    cout << y << endl;
    return 0;
}