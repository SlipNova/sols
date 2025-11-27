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

// x ^ 0 = x
// x ^ x = 0
// ^ is commutative

int singleNumber(vector <int>& nums) {
    int ans = 0;
    for (int it: nums) {
        ans ^= it;
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
        vector <int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << singleNumber(nums) << '\n';
    }
    return 0;
}