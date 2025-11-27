
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

void backtrack(vector<int> &candidates, int target, int start, vector<int> &comb, vector<vector<int>> &res) {
    if (target == 0) {
        res.push_back(comb);
        return;
    }
    else {
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;
            comb.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1, comb, res);
            comb.pop_back();
        }
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> res;
    vector<int> comb;
    backtrack(candidates, target, 0, comb, res);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, target;
        cin >> n >> target;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int>> ans = combinationSum2(a, target);
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[0].size(); j++) {
                cout << ans[i][j] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}


