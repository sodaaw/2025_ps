#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        int h1, h2, m1, m2, s1, s2;
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        int start = h1 * 3600 + m1 * 60 + s1;
        int end = h2 * 3600 + m2 * 60 + s2;

        int diff = end - start;

        int h = diff / 3600;
        diff %= 3600;

        int m = diff / 60;
        int s = diff % 60;

        cout << h << " " << m << " " << s << endl;
    }

    return 0;
}

// 시간 관련 덧셈/뺄셈은 무조건 전부 다 초로 바꿔서 하기!!!