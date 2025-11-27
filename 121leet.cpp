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

int maxProfit(vector <int>& prices) {
    int n = prices.size();
    int ans = 0;
    vector <int> dp(n);
    dp[n - 1] = prices[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        dp[i] = max(prices[i], dp[i + 1]);
    }
    for (int i = 0; i < n; i++) {
        int profit = dp[i] - prices[i];
        ans = max(ans, profit);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maxProfit(a) << '\n';
    }
    return 0;
}