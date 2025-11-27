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

int rob(vector<int>& a) {
    int n = a.size();
    if (n == 1) {
        return a[0];
    }
    if (n == 2) {
        return max(a[0], a[1]);
    }
    vector<int> dp(n);
    int prev = 0;
    dp[0] = a[0];
    if (a[0] >= a[1]) {
        dp[1] = a[0];
    } else {
        dp[1] = a[1];
        prev = 1;
    }
    for (int i = 2; i < n; i++) {
        if (prev == i - 1) {
            if (dp[i - 1] >= dp[i - 2] + a[i]) {
                dp[i] = dp[i - 1];
            } else {
                dp[i] = dp[i - 2] + a[i];
                prev = i;
            }
        } else {
            dp[i] = dp[i - 1] + a[i];
            prev = i;
        }
    }
    return dp[n - 1];
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
        cout << rob(a) << '\n';
    }
    return 0;
}
