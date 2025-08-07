#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        count += nums[i];
    }

    cout << count << endl;
    return 0;
}