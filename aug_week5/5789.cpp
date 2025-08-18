#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string nums;
        cin >> nums;

        int len = nums.size();

        if (nums[len/2 - 1] == nums[len/2])
            cout << "Do-it" << endl;
        else
            cout <<"Do-it-Not" << endl;
    }
    return 0;
}