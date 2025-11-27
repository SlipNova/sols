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

int solve(vector <int> &p) {
    int n = p.size();
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    tt = 1;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        cout << solve(p) << '\n';
    }
    return 0;
}