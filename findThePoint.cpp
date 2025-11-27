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

void solve(vector <int> p, vector <int> q) {
    cout << 2 * q[0] - p[0] << ' ' <<  2 * q[1] - p[1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        vector <int> p(2);
        vector <int> q(2);
        cin >> p[0] >> p[1] >> q[0] >> q[1];
        solve(p, q);
    }
    return 0;
}