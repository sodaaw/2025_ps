#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string nums;
        getline(cin, nums);
        stringstream ss(nums);

        int n, count = 0;
        while (ss >> n) {
            count += n;
        }
        cout << count << endl;
    }

    return 0;
}