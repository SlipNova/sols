
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


void add(vector<vector<vector<int>>>& ans, vector<bool>& in, int val) {
    for (int i = 0; i < in.size(); i++) {
        if (i + val > in.size()) {
            return;
        }
        if (in[i]) {
            in[i + val] = true;
            for (int j = 0; j < ans[i].size(); j++) {
                vector<int> vec;
                vec = ans[i][j];
                vec.push_back(val);
                ans[i + val].push_back(vec);
            }
        }
    }
}

vector<vector<int>> combinationSum(vector<int> a, int target) {
    int n = a.size();
    sort(a.begin(), a.end());
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > target) {
            a.pop_back();
            n--;
        }
    }
    if (a.size() == 0 && a[0] > target) {
        return {{}};
    }
    vector<vector<vector<int>>> ans(target + 1);
    ans[0] = {{}};
    vector<bool> in(target + 1, false);
    in[0] = true;
    for (int i = 0; i < n; i++) {
        add(ans, in, a[i]);
    }
    return ans[target];
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
        vector<vector<int>> A = combinationSum(a, target);
        cout << A.size() << '\n';
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}


