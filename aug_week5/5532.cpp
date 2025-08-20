#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;

    int kor = (int)ceil((double)a / c);
    int math = (int)ceil((double)b / d);


    int days = max(kor, math);
    cout << l - days << endl;
    return 0;
}