#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <map>
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
        int x, y , k;
        cin >> x >> y >> k;
        long long want = (long long) k * (1 + y) - 2;
        // ceil (a / b) = (a + b - 1) / b
        long long sol = (want + x - 1) / (x - 1) + k;
        cout << sol << '\n';
    }
    return 0;
}