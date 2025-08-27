#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct MaxHeap {
    vector<int> h;

    void push(int x) {
        h.push_back(x); // 배열 맨 끝에 추가
        int i = h.size() - 1;   // 인덱스 카운트

        while (i > 0) {
            int p = (i - 1) / 2;    // 부모
            if (h[p] >= h[i]) break;    // 부모가 더 크면 종료
            swap(h[p], h[i]);   // 부모-자녀 교환
            i = p;  // 현재 자식 인덱스에 부모 인덱스 저장
        }
    }

    int top() {
        return h[0];
    }

    void pop() {
        if (h.empty()) return;

        h[0] = h.back();    // 맨 끝 요소를 첫번째로 가져오기
        h.pop_back();       // 맨 끝 요소 제거

        int i = 0, n = h.size();

        while (true) {
            int left = i * 2 + 1;
            int right = i * 2 + 2;
            int mx = i;

            // 새로운 root에 대해 힙 속성을 만족하는지 검사
            // 자식 노드들과 비교하면서 더 큰 쪽 자식과 교환함
            // 아래로 내려가며 계속 반복
            if (left < n && h[left] > h[mx]) mx = left;
            if (right < n && h[right] > h[mx]) mx = right;
            if (mx == i) break;

            swap(h[i], h[mx]);
            i = mx;
        }
    }

    bool empty() {
        return h.empty();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    MaxHeap heap;

    while (n--) {
        int x;
        cin >> x;

        if (x == 0) {
            if (heap.empty()) 
                cout << 0 << "\n";
            else {
                cout << heap.top() << "\n";
                heap.pop();
            }
        }
        else heap.push(x);

    }

    return 0;
}