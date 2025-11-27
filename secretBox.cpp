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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        long long x, y, z, k, sol;
        cin >> x >> y >> z >> k;
        sol = 0;
        for (int a = 1; a <= x; a++) {
            for (int b = 1; b <= y; b++) {
                if (k % (a * b)) continue;
                long long c = k / (a * b);
                if (c > z) continue;
                long long ww = (long long) (x - a + 1) * (y - b + 1) * (z - c + 1);
                sol = max(ww, sol);
            }
        }
        cout << sol << '\n';
    }
    return 0;
}