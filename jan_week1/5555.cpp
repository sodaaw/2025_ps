#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        string ring;
        cin >> ring;

        string realRing = ring + ring;
        if (realRing.find(word) != string::npos)
            count++;
    }

    cout << count << endl;
    return 0;
}