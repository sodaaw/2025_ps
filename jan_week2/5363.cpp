#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s); // 문장 입력받음

        // 쪼개서 담을 문자열 배열
        vector<string> words;
        stringstream ss(s); // 문자열을 cin처럼 다루기
        string w;

        while (ss >> w) { // ss에서 단어 하나를 꺼내서 word에 담자
            words.push_back(w);
        }

        // 출력
        for (int j = 2; j < (int)words.size(); j++) {
            cout << words[j];
            if (j != (int)words.size() - 1)
                cout << " ";
        }
        cout << " " << words[0] << " " << words[1] << endl;
    }
    return 0;
}