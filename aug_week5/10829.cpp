#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toBinary(long long num) {
    if (num == 0) return "0";

    string bin = "";
    while (num > 0) {
        bin.push_back('0' + num % 2);
        num /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main() {
    long long n;
    cin >> n;
    cout << toBinary(n) << "\n";

    return 0;
}