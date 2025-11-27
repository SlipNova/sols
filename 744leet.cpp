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

char nextGreatestLetter(vector <char>& a, int target) {
    int n = a.size();
    int left = 0;
    int right = n - 1;
    char result = '0';
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] - target <= 0) {
            left = mid + 1;
        }
        else {
            result = a[mid];
            right = mid - 1;
        }
    }
    return (result == '0' ? a[0] : result);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, target;
        cin >> n >> target;
        vector <char> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << nextGreatestLetter(a, target) << '\n';
    }
    return 0;
}