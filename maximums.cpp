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

using namespace std;
using namespace std::chrono;

// x0 = 0
// ai = bi + xi
// a0 = b0
// xi = max(0, a0a1..ai-1)
// a1 = b1 + max(0,a0) = b1 + max(0,b0) supose max(0, b0) = Y1
// a2 = b2 + max(0,a0a1) = b2 + max(0,b0a1) then max(0, b0a1) = max (a0, a1) = Y2
// a3 = b3 + max(0,a0a1a2) = b3 + max(0, max{b0, a1, a2}) then max(a0,a1,a2) = max(Y2,a1)


void solve(vector <int> &b) {
    int n = b.size();
    int max = 0;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] += b[i] + max;
        cout << a[i] << ' ';
        max = std::max(a[i], max);
    }
    cout << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    //cin >> tt; 
    tt = 1;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        solve(b);
    }
    return 0;
}
