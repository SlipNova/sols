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

int solve(vector <char> &grid, int n, int sx, int sy, int gx, int gy) {
    int ans = abs(sx - gx) + abs(sy - gy);
    while (true) {

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, sx, sy, gx, gy;
        cin >> n;
        cin >> sx >> sy >> gx >> gy;
        vector <char> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        cout << solve(grid, n, sx, sy, gx, gy) << '\n';
    }
    return 0;
}