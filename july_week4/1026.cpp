#include <iostream>
#include <algorithm>    // 정렬 위해 필요
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int s = 0;
    sort(a, a + n);
    sort(b, b + n);
    reverse(b, b + n);
    for (int i = 0; i < n; i++) {
        s += a[i] * b[i];
    }


    cout << s << endl;
    return 0;
}