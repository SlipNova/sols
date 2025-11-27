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

int minimumSum(vector <int> &nums) {
    int n = nums.size();
    int ans = INT_MAX;
    vector <int> pre(n), suf(n);
    pre[0] = nums[0];
    suf[n - 1] = nums[n - 1];
    for (int i = 1; i < n; i++) {
        pre[i] = min(pre[i - 1], nums[i]);
        suf[n - i - 1] = min(suf[n - i], nums[n - i - 1]);
    }
    for (int j = 1; j < n - 1; j++) {
        if (pre[j - 1] < nums[j] && nums[j] > suf[j + 1]) {
            ans = min(ans, pre[j - 1] + nums[j] + suf[j + 1]);
        }
    }
    if (ans == INT_MAX) return -1;
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
        vector <int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << minimumSum(nums) << '\n';
    }
    return 0;
}