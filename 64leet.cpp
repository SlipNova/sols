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

int minPathSum(vector <vector <int>>& grid) {
    int R = grid.size();
    int C = grid[0].size();
    vector <vector <int>> dp(R, vector <int> (C, 0));
    dp[0][0] = grid[0][0];
    for (int row = 1; row < R; row++) { 
        dp[row][0] = grid[row][0] + dp[row - 1][0];
    }
    for (int col = 1; col < C; col++) {
        dp[0][col] = grid[0][col] + dp[0][col - 1];
    }
    for (int row = 1; row < R; row++) {
        for (int col = 1; col < C; col++) {
            dp[row][col] = grid[row][col] + min(dp[row - 1][col], dp[row][col - 1]);
        }
    }
    return dp[R - 1][C - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int m, n;
        cin >> m >> n;
        vector <vector <int>> grid(m, vector <int> (n));
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                cin >> grid[row][col];
            }
        }
        cout << minPathSum(grid) << '\n';
    } 
    return 0;
}