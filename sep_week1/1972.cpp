#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct MinHeap {
    vector<int> h;

    void push(int x) {
        h.push_back(x);
        int i = h.size() - 1;

        while (i > 0) {
            int p = (i - 1) / 2;
            if (h[p] <= h[i]) break;
            swap(h[p], h[i]);   // 부모-자녀 교환
            i = p;  // 현재 자식 인덱스에 부모 인덱스 저장
        }
    }

    void pop() {
        if (h.empty()) return;

        h[0] = h.back();
        h.pop_back();

        int i = 0, n = h.size();

        while (true) {
            int left = i * 2 + 1;
            int right = i * 2 + 2;
            int mn = i;

            // 새로운 root에 대해 힙 속성을 만족하는지 검사
            // 자식 노드들과 비교하면서 더 작은 쪽 자식과 교환함
            // 아래로 내려가며 계속 반복
            if (left > n && h[left] < h[mn]) mn = left;
            if (right > n && h[right] < h[mn]) mn = right;
            if (mn == i) break;

            swap(h[i], h[mn]);
            i = mn;
        }
    }

    int top() {
        return h[0];
    }

    bool empty() {
        return h.empty();
    }
};

int main() {
    int n;
    cin >> n;

    MinHeap h;

    while (n--) {
        int x;

        if (x == 0) {
            if (h.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << h.top() << "\n";
                h.pop();
            }
        }
        else 
            h.push(x);
    }
    return 0;
}