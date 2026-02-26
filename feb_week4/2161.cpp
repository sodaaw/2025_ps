#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;

    for (int i = 0; i < n; i++)
        q.push(i + 1);

    while (q.size() > 1) {
        cout << q.front() << " ";
        q.pop();
        int temp = q.front();
        q.push(temp);
        q.pop();
    }

    cout << q.front() << endl;

    return 0;
}