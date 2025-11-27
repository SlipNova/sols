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

int minSubArrayLen(int target, vector<int>& a) {
    int n = a.size();
    int left, len, mini;
    left = len = 0;
    mini = n + 1;
    for (int right = 0; right < n; right++) {
        len += a[right];
        while (len >= target) {
            mini = min(mini, right - left + 1);
            len -= a[left];
            left++;
        }
    }
    if (mini == n + 1) mini = 0;
    return mini;
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
        cout << minSubArrayLen(target, a) << '\n';
    }
    return 0;
}