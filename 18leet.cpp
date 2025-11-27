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

vector<vector<int>> kSum(vector<int>& nums, long long target, int start, int k) {
    vector<vector<int>> res;
    if (start == nums.size()) {
        return res;
    }
    long long average_value = target / k;
    if (nums[start] > average_value || average_value > nums.back()) {
        return res;
    }
    if (k == 2) {
        return twoSum(nums, target, start);
    }
    for (int i = start; i < nums.size(); i++) {
        if (i == start || nums[i - 1] != nums[i]) {
            for (vector<int>& subset : kSum(nums, static_cast<long long>(target) - nums[i], i + 1, k - 1)) {
                res.push_back({nums[i]});
                res.back().insert(end(res.back()), begin(subset), end(subset));
            }
        }
    }
    return res;
}

vector<vector<int>> twoSum(vector<int>& nums, long long target, int start) {
    vector<vector<int>> res;
    int lo = start, hi = int(nums.size()) - 1;
    while (lo < hi) {
        int curr_sum = nums[lo] + nums[hi];
        if (curr_sum < target || (lo > start && nums[lo] == nums[lo - 1])) {
            ++lo;
        } 
        else if (curr_sum > target || (hi < nums.size() - 1 && nums[hi] == nums[hi + 1])) {
            --hi;
        } 
        else {
            res.push_back({nums[lo++], nums[hi--]});
        }
    }
    return res;
}

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(begin(nums), end(nums));
    return kSum(nums, target, 0, 4);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, target;
        cin >> n >> target;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector <vector <int>> sol = fourSum(a, target);
        for (int i = 0; i < sol.size(); i++) {
            for (int j = 0; j < sol[i].size(); j++) {
                cout << sol[i][j];
            }
        }
    }
    return 0;
}