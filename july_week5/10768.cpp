#include <iostream>
using namespace std;

int main() {
    int month, day;
    cin >> month;
    cin >> day;

    string answer;
    if (month < 2 || (month == 2 && day < 18)) answer = "Before";
    else if (month == 2 && day == 18) answer = "Special";
    else answer = "After";

    cout << answer << endl;
    return 0;
}