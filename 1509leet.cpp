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

int minDifference(vector<int>& nums) {
    int numsSize = nums.size();
    if (numsSize <= 4) return 0;
    sort(nums.begin(), nums.end());
    int minDiff = INT_MAX;
    // Four scenarios to compute the minimum difference
    for (int left = 0, right = numsSize - 4; left < 4; left++, right++) {
        minDiff = min(minDiff, nums[right] - nums[left]);
    }
    return minDiff;
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
        for (int i = 0; i < n; i++)  {
            cin >> a[i];
        }
        cout << minDifference(a) << '\n';
    }
    return 0;
}