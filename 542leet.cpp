#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

void bfs(vector<vector<int>>& matrix, vector<vector<int>>& sol, int R, int C) {
    vector<pair<int, int>> directions{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    queue<pair<int, int>> q;
    for (int row = 0; row < R; ++row) {
        for (int col = 0; col < C; ++col) {
            if (matrix[row][col] == 0) {
                q.push({row, col});
                sol[row][col] = 0;
            } else {
                sol[row][col] = INT_MAX; 
            }
        }
    }
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (auto& dir : directions) {
            int newX = x + dir.first;
            int newY = y + dir.second;
            
            if (newX >= 0 && newX < R && newY >= 0 && newY < C) {
                if (sol[newX][newY] > sol[x][y] + 1) {
                    sol[newX][newY] = sol[x][y] + 1;
                    q.push({newX, newY});
                }
            }
        }
    }
}

vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
    int R = matrix.size();
    int C = matrix[0].size();
    vector<vector<int>> sol(R, vector<int>(C));
    bfs(matrix, sol, R, C);   
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> matrix(m, vector<int>(n));
        for (int row = 0; row < m; ++row) {
            for (int col = 0; col < n; ++col) {
                cin >> matrix[row][col];
            }
        }
        vector<vector<int>> sol = updateMatrix(matrix);
        for (int row = 0; row < m; ++row) {
            for (int col = 0; col < n; ++col) {
                cout << sol[row][col] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
