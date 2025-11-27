
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

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);
    for (int i = 1; i < n; i++) {
        if (ans[ans.size() - 1][1] >= intervals[i][0]) {
            ans[ans.size() - 1][1] = max(intervals[i][1], ans[ans.size() - 1][1]);
        }
        else {
            ans.push_back(intervals[i]);
        }
    }
    return ans;
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
        vector<vector<int>> ans = merge(intervals);
        cout << '[';
        for (int i = 0; i < ans.size(); i++) {
            cout << '[' << ans[i][0] << ',' << ans[i][1] << ']';
            if (i != ans.size() - 1) {
                cout << ',';
            }
        }
        cout << ']' << '\n';
    }
    return 0;
}


