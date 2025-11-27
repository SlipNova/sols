
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <stdexcept>

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 7;

using namespace std;

int hourGlass(vector<vector<int>>& arr) {
    int R = arr.size();
    int C = arr[0].size();
    int mx = INT_MIN;
    for (int row = 0; row <= R - 3; row++) {
        for (int col = 0; col <= C - 3; col++) {
            int a, b, c, d, e, f, g, sum;
            a = arr[row][col];
            b = arr[row][col + 1];
            c = arr[row][col + 2];
            d = arr[row + 1][col + 1];
            e = arr[row + 2][col];
            f = arr[row + 2][col + 1];
            g = arr[row + 2][col + 2];
            sum = a + b + c + d + e + f + g;
            mx = max(mx, sum);
        }
    }
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> arr(R, vector<int> (C));
        for (int i = 0; i < R; i++) {
            for (int col = 0; col < C; col++) {
                cin >> arr[i][col];
            }
        }
        cout << hourGlass(arr) << '\n';
    }
    return 0;
}


