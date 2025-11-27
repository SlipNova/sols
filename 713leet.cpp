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


int numSubarrayProductLessThanK(vector<int>& a, int k) {
    int n = a.size();
    int left, sol, currProd;
    left = sol = 0;
    currProd = 1;
    for (int right = 0; right < n; right++) {
        currProd *= a[right];
        while (currProd >= k && left <= right) {
            currProd /= a[left];
            left++;
        }
        sol += (right - left + 1);
    }
    return sol;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << numSubarrayProductLessThanK(a, k) << '\n';
    }
    return 0;
}
