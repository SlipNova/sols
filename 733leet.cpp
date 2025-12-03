#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

using ll = long long;
using ld = long double;

const int MOD = 1e9+7;
const ld PI = acos((ld)-1);

template<class T> bool ckmin(T &a, const T &b) {return b < a ? a = b, 1 : 0;}
template<class T> bool ckmax(T &a, const T &b) {return a < b ? a = b, 1 : 0;}

void floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    if (image[sr][sc] == color) return;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int m = image.size();
    int n = image[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    queue<pair<int, int>> q;
    int val = image[sr][sc];
    q.push({sr, sc});
    visited[sr][sc] = true;
    while (!q.empty()) {
        pair<int, int> p = q.front();
        image[p.first][p.second] = color;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int newx = p.first + dx[i];
            int newy = p.second + dy[i];
            if (0 <= newx && newx < m && 0 <= newy && newy < n &&
                !visited[newx][newy] && image[newx][newy] == val) {
                q.push({newx, newy});
                visited[newx][newy] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> image(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> image[i][j];
            }
        }
        int sr, sc, color; cin >> sr >> sc >> color;
        floodFill(image, sr, sc, color);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << image[i][j] << (j != n - 1 ? ' ' : '\n');
            }
        }
    }
    return 0;
}