
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

long getWays(int x, vector<long> c) {
    int n = c.size();
    vector<long> dp(x+1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= x; j++) {
            if (j >= c[i]) {
                dp[j] += dp[j - c[i]];
            }
        }
    }
    return dp[x];
}

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int x, n;
        cin >> x >> n;
        vector<long> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        cout << getWays(x, c) << '\n';
    }
    return 0;
}

