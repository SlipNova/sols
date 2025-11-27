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
    int profit = 0;
    for (int i = 0; i < prices.size() - 1; i++) {
        int diff = prices[i + 1] - prices[i];
        if (diff > 0) {
            profit += diff;
        }
    }
    return profit;
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
