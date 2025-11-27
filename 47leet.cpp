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

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> vec;
    sort(nums.begin(), nums.end());
    vec.push_back(nums);
    while (next_permutation(nums.begin(), nums.end())) {
        vec.push_back(nums);
    }
    return vec;
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
        vector <vector <int>> perms = permuteUnique(a);
        for (int i = 0; i < perms.size(); i++) {
            for (int j = 0; j < perms[0].size(); j++) {
                if (j > 0) {
                    cout << ' ';
                }
                cout << perms[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}