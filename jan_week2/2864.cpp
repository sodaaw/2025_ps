#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string minA = a, maxA = a;
    string minB = b, maxB = b;

    // 최소를 구할때는 모든걸 5로 변경
    for (char &c : minA)
        if (c == '6') c = '5';
    for (char &c : minB)
        if (c == '6') c = '5';

    // 최대를 구할때는 모든걸 6으로 변경
    for (char &c : maxA)
        if (c == '5') c = '6';
    for (char &c : maxB)
        if (c == '5') c = '6';

    int minSum = stoi(minA) + stoi(minB);
    int maxSum = stoi(maxA) + stoi(maxB);

    cout << minSum << " " << maxSum << endl;
    return 0;
}