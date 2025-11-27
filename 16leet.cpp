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

int threeSumClosest(vector <int> &a, int target) {
    int n = a.size();
    int sol;
    int diff = INT_MAX;
    sort(a.begin(), a.end());
    if (n == 3) {
        return (a[0] + a[1] + a[2]);
    }
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = a[right] + a[left] + a[i];
            if (sum > target) {
                diff = min(diff, (sum - target));
                if (diff == (sum - target)) {
                    sol = sum;
                }
                right--;
            } 
            else if (sum < target) {
                diff = min(diff, (target - sum));
                if (diff == (target - sum)) {
                    sol = sum;
                }
                left++;
            }
            else {
                return target;
            }
        }
    }
    return sol;
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

    }
    return 0;
}