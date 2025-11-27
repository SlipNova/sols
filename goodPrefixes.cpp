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
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mx = a[0];
        long long ans = 0, sm = 0;
        for (int i = 0; i < n; i++) {
            sm += a[i];
            if (mx < a[i]) {
                mx = a[i];
            }
            if (sm - mx == mx) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
