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
        int n, x;
        cin >> n >> x;
        long long ans = 0;
        for (int a = 1; a <= min(n, x); a++) {
            for (int b = 1; a * b <= n && a + b <= x; b++) {
                int hc = min((n - a * b) / (a + b), x - a - b);
                ans += hc;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}