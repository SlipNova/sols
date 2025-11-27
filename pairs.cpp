
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


int pairs(int target, vector<int> a) {
    sort(a.begin(), a.end());
    int ans, left = 0;
    int right = 1;
    while (right < a.size()) {
        int diff = a[right] - a[left];
        if (diff == target) {
            left++;
            right++;
            ans++;
            cout << a[right] << ' ' << a[left] << endl;
        }
        else if (diff < target) {
            right++;
        }
        else {
            left++;
        }
        if (left == right) right++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, target;
        cin >> n >> target;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << pairs(target, a) << '\n';
    }
    return 0;
}


