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

// Complex Multiplication
// (a0 + ia1) * (b0 + ib1) = (a0 * b0) + i(a0 * b1) + i(a1 * b0) - (a1 * b1)
vector <long long> operator*(const vector <long long> &a, const vector <long long> &b) {
    vector <long long> res(2);
    res[0] = (a[0] * b[0]) - (a[1] * b[1]);
    res[1] = (a[0] * b[1]) + (a[1] * b[0]);
    return res;
}

void solve(vector <long long > c, long long k, long long m) {
    vector <long long> sol(2);
    c[0] %= m;
    c[1] %= m;
    sol[0] = 1ll;
    sol[1] = 0;
    while (k > 0) {
        if (k & 1) {
            sol = sol * c;
            sol[0] %= m;
            sol[1] %= m;
        }
        c = (c * c);
        c[0] %= m;
        c[1] %= m;
        k >>= 1;
    }
    if (sol[0] < 0) {
        sol[0] = m + sol[0];
    }
    if (sol[1] < 0) {
        sol[1] = m + sol[1];
    }
    cout << sol[0] << ' ' << sol[1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        long long k, m;
        vector <long long> c(2);
        cin >> c[0] >> c[1] >> k >> m;
        solve(c, k, m);
    }
    
    return 0;
}