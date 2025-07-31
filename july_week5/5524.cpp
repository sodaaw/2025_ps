#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string si;
        cin >> si;

        for (int j = 0; j < si.length(); j++)
            si[j] = tolower(si[j]);
            
        cout << si << endl;
    }

    return 0;
}