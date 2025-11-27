
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <stdexcept>

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 7;

using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    // If the intervals vector is empty, return a vector containing the
    // newInterval
    if (intervals.empty()) {
        return {newInterval};
    }
    int n = intervals.size();
    int target = newInterval[0];
    int left = 0, right = n - 1;
    // Binary search to find the position to insert newInterval
    while (left <= right) {
        int mid = (left + right) / 2;
        if (intervals[mid][0] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    // Insert newInterval at the found position
    intervals.insert(intervals.begin() + left, newInterval);
    // Merge overlapping intervals
    vector<vector<int>> res;
    for (const auto& interval : intervals) {
        // If res is empty or there is no overlap, add the interval to the
        // result
        if (res.empty() || res.back()[1] < interval[0]) {
            res.push_back(interval);
            // If there is an overlap, merge the intervals by updating the
            // end of the last interval in res
        } else {
            res.back()[1] = max(res.back()[1], interval[1]);
        }
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int> (2));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> intervals[i][j];
            }
        }
        vector<int> another(2);
        cin >> another[0] >> another[1];
        vector<vector<int>> ans = insert(intervals, another);
        cout << '[';
        for (int i = 0; i < ans.size(); i++) {
            cout << '[' << ans[i][0] << ',' << ans[i][1] << ']';
            if (i != ans.size() - 1) {
                cout << ',';
            }
        }
        cout << '\n';
    }
    return 0;
}


