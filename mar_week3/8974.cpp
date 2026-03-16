#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int nums[1001];
    int idx =1; // 몇번째까지 넣었는지 세는 변수
    int count = 1;

    while (idx <= 1000) {
        for (int i = 0; i < count; i++) {
            nums[idx] = count;
            idx++;
            if (idx > 1000) break;
        }
        count++;
    }

    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += nums[i];
    }
    cout << sum << endl;

    return 0;
}