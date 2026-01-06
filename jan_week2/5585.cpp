#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int left = 1000 - n;
    int count = 0;


    count += (left / 500);
    left %= 500;
    count += (left / 100);
    left %= 100;
    count += (left / 50);
    left %= 50;
    count += (left / 10);
    left %= 10;
    count += (left / 5);
    left %= 5;
    count += left;

    cout << count << endl;
    return 0;
}