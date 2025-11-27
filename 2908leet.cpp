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

int minimumSum(vector <int> &a) {
    int n = a.size();
    int sol = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] >= a[j]) {
                continue;
            }
            for (int k = j + 1; k < n; k++) {
                if (a[j] > a[k]) {
                    sol = min(sol, (a[i] + a[j] + a[k]));
                }
            }
        }
    }
    if (sol == INT_MAX) {
        return -1;
    }
    return sol;
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
        cout << minimumSum(a);
    }
    return 0;
}