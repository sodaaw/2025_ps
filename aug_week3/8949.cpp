#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string A = to_string(a);
    string B = to_string(b);
    string answer = "";

    int i = (int)A.size() - 1;
    int j = (int)B.size() - 1;

    while (i >= 0 || j >= 0) {
        int da, db;

        if (i >= 0) da = A[i] - '0';
        else da = 0;

        if (j >= 0) db = B[j] - '0';
        else db = 0;

        answer = to_string(da + db) + answer;
        i--;
        j--;
    }

    cout << answer << endl;
    return 0;
}