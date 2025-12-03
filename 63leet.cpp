#include <bits/stdc++.h>

using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacles) {
    int m = obstacles.size();
    int n = obstacles[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    dp[0][0] = 1;
    if (obstacles[0][0] == 1) {
        return 0;
    }
    for (int i = 1; i < m; i++) {
        if (obstacles[i][0] == 1) {
            break;
        } else {
            dp[i][0] = 1;
        }
    }
    for (int j = 1; j < n; j++) {
        if (obstacles[0][j] == 1) {
            break;
        } else {
            dp[0][j] = 1;
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (obstacles[i][j] == 1) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    return dp[m - 1][n - 1];
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> obstacles(m, vector<int> (n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> obstacles[i][j];
            }
        }
        cout << uniquePathsWithObstacles(obstacles) << '\n';
    }
}