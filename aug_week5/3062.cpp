#include <iostream>
#include <string>
using namespace std;

bool isPal(int a) {
    string s = to_string(a);
    int left = 0, right = (int)s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) return false;
        left++, right--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int rev = 0;
        int temp = n;

        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }

        int sum = n + rev;
        if (isPal(sum)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}