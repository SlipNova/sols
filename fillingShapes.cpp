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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    tt = 1;
    while (tt--) {
        int n; cin >> n;
        vector <int> dp(n + 1, 0);
        dp[2] = 2;
        for (int i = 4; i <= n; i++) {
            if (i % 2 == 0) {
                dp[i] = dp[i - 2] * 2;
            }
        }
        cout << dp[n] << '\n';
    }
    return 0;
}