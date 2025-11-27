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

int searchInsert(vector <int> a, int target) {
    int left = 0;
    int right = a.size() - 1;
    while (left <= right) {
        int mid =  left + (right - left) / 2;
        if (a[mid] == target) {
            return mid;
        }
        else if (a[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    if (left > right) {
        return left;
    }
    return (right - 1);
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
        cout << searchInsert(a, target) << '\n';
    }
    return 0;
}