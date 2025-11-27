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

int maximalSquare(vector <vector <char>> &table) {
    int h = table.size();
    int w = table[0].size();
    vector <vector <int>> dp(h, vector <int> (w));
    int answer = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (table[i][j] == '1') {
                dp[i][j] = 1;
                if (i > 0 && j > 0) {
                    dp[i][j] += min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
                }
                answer = max(answer, dp[i][j]);
            }
        }
    }
    return answer *  answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int height, width;
        cin >> height >> width;
        vector <vector <char>> table(height, vector <char> (width));
        for (int row = 0; row < height; row++) {
            for (int col = 0; col < width; col++) {
                cin >> table[row][col];
            }
        }
        cout << maximalSquare(table) << '\n';
    }
    return 0;
}