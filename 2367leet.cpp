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

int arithmeticTriplets(vector <int> &a, int diff) {
    int n = a.size();
    int sol = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] - a[i] != diff) {
                continue;
            }
            for (int k = j + 1; k < n; k++) {
                if (a[k] - a[j] == diff) {
                    sol++;
                }
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
        int n, diff;
        cin >> n >> diff;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << arithmeticTriplets(a, diff) << '\n';
    }
    return 0;
}