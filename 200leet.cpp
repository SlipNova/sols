#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

void bfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int x, int y) {
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    while (!q.empty()) {
        auto [cx, cy] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            int nx = cx + dx[k];
            int ny = cy + dy[k];
            if (nx >= 0 && ny >= 0 && nx < m && ny < n && !visited[nx][ny] && grid[nx][ny] == '1') {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int numIslands(vector<vector<char>> &grid) {
    int m = grid.size();
    int n = grid[0].size();
    int comp = 0;
    vector<vector<bool>> visited(m, vector<bool> (n, false));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] && grid[i][j] == '1') {
                bfs(grid, visited, i, j);
                comp++;
            }
        }
    }
    return comp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int m, n;
        cin >> m >> n;
        vector<vector<char>> grid(m, vector<char> (n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        cout << numIslands(grid) << '\n';
    }
    return 0;
}