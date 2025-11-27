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

long long countSubarrays(vector <int> &a, int k) {
    int n = a.size();
    int maxx = *max_element(a.begin(), a.end());
    int countMaxx, left;
    countMaxx = left = 0;
    long long sol = 0;
    for (int right = 0; right < n; right++) {
        if (a[right] == maxx) {
            countMaxx++;
        }
        while (countMaxx >= k) {
            sol += (n - right);
            if (a[left] == maxx) {
                countMaxx--;
            }
            left++;
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
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << countSubarrays(a, k) << '\n';
    }
    return 0;
}