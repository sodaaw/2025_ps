#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max_money = 0;

    for (int i = 0; i < n; i++) {
        // 주사위의 각 눈이 몇번 나왔는지 저장하는 배열
        int dice[7] = {0};

        for (int j = 0; j < 4; j++) {
            int num;
            cin >> num;
            dice[num]++;
        }

        int money = 0;
        
        // 4개가 같은 경우
        for (int j = 1; j <= 6; j++) {
            if (dice[j] == 4) money = 50000 + j * 5000;
        }

        // 3개가 같은 경우
        for (int j = 1; j <= 6; j++) {
            if (dice[j] == 3) money = 10000 + j * 1000;
        }

        // 2쌍
        vector<int> pairs;
        for (int j = 1; j <= 6; j++) {
            if (dice[j] == 2) pairs.push_back(j);
        }

        if (pairs.size() == 2) money = 2000 + (pairs[0] + pairs[1]) * 500;

        // 1쌍
        if (pairs.size() == 1 && money == 0) money = 1000 + pairs[0] * 100;

        // 모두 다를 때
        if (money == 0) {
            for (int j = 6; j >= 1; j--) {
                if (dice[j] == 1) {
                    money = j * 100;
                    break;
                }
            }
        }

        // 최종 값 업데이트
        max_money = max(max_money, money);
    }

    cout << max_money << endl;
    return 0;
}