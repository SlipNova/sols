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

double maxProduct(vector <int>& nums) {
    int n = nums.size();
    double ans = INT_MIN, prod = 1;
    for (int i = 0; i < n; i++) {
        prod *= nums[i];
        ans = max(ans, prod);
        if (prod == 0) prod = 1;
    }
    prod = 1;
    for (int i = n - 1; i >= 0; i--) {
        prod *= nums[i];
        ans = max(prod, ans);
        if (prod == 0) prod = 1;
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
        cout << maxProduct(a) << '\n';
    }
    return 0;
}