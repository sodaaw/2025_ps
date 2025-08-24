#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    int left = 0, right = n - 1;
    int count = 0;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == m) {
            count++;
            left++;
            right--;
        }
        else if (sum < m) left++;
        else right--;
    }

    cout << count << endl;
    return 0;
}