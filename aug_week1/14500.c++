#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int> > nums(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];

    int tetro[19][3][2] = {
        { {1,0}, {2,0}, {3,0} },
        { {0,1}, {0,2}, {0,3} },
        { {1,0}, {0,1}, {1,1} },
        { {1,0}, {2,0}, {2,-1} },
        { {1,0}, {2,0}, {2,1} },
        { {0,1}, {0,2}, {1,0} },
        { {0,1}, {0,2}, {1,2} },
        { {0,1}, {1,0}, {2,0} },
        { {0,1}, {1,1}, {2,1} },
        { {1,0}, {1,1}, {1,2} },
        { {0,1}, {0,2}, {-1,2} },
        { {1,0}, {1,-1}, {2,-1} },
        { {1,0}, {1,1}, {2,1} },
        { {0,1}, {-1,1}, {-1,2} },
        { {0,1}, {1,1}, {1,2} },
        { {0,1}, {-1,0}, {0,-1} },
        { {-1,0}, {0,-1}, {1,0} },
        { {0,-1}, {1,0}, {0,1} },
        { {1,0}, {0,1}, {-1,0} }
    };

    int current_max = 0;
    for (int i = 0; i < n; i++) {    
        for (int j = 0; j < m; j++) { 
            for (int k = 0; k < 19; k++) {
                int sum = nums[i][j];
                bool is_valid = true;
                for (int l = 0; l < 3; l++) {
                    int ny = i + tetro[k][l][0];
                    int nx = j + tetro[k][l][1];
                    if (ny < 0 || ny >= n || nx < 0 || nx >= m) {
                        is_valid = false;
                        break;
                    }
                    sum += nums[ny][nx];
                }
                if (is_valid && sum > current_max) current_max = sum;
            }
        }
    }
    cout << current_max << endl;
    return 0;
}
