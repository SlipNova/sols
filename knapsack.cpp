
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std :: chrono;

int unboundedKnapsack(int x, vector<int> v) {
    int n = v.size();
    vector<int> dp(x+1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= x; j++) {
            if (j >= v[i]) {
                dp[j] += dp[j - v[i]];
            }
        }
    }
    while (x) {
        if (dp[x] != 0) {
            break;
        }
        x--;
    }
    return x;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << unboundedKnapsack(x, v) << '\n';
    }
    return 0;
}