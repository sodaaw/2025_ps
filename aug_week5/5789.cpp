#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string nums;
        cin >> nums;

        if (nums.front() == nums.back())
            cout << "Do-it" << endl;
        else
            cout << "Do-it-Not" << endl;
    }
    return 0;
}