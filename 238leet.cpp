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

// 1 2 3 4
// 1   1   2   6   24
// 24  24  12  4   1

vector <int> productExceptSelf(vector <int>& nums) {
    int n = nums.size();
    vector <int> pref(n + 1), suff(n + 1);
    vector <int> ans(n, 0);
    int prod1, prod2;
    if (count(nums.begin(), nums.end(), 0) > 1) {
        return ans;
    }
    prod1 = prod2 = 1;
    for (int i = 0; i < n + 1; i++) {
        if (i == 0) {
            pref[i] = 1;
            suff[n - i] = 1;
            continue;
        }
        prod1 *= nums[i - 1];
        prod2 *= nums[n - i];
        pref[i] = prod1;
        suff[n - i] = prod2;
    }
    for (int i = 0; i < n; i++) {
        ans[i] = pref[i] * suff[i + 1];
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
        vector <int> b = productExceptSelf(a);
        for (int it: b) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    return 0;
}