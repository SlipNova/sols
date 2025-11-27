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
        int n; 
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector <int> h(n + 1), u(n + 1);
        h[n] = u[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            h[i] = u[i + 1] + a[i];
            if (i + 2 <= n) {
                h[i] = min(h[i], u[i + 2] + a[i + 1] + a[i]);
            }
            if (i + 2 <= n) {
                u[i] = min(h[i + 1], h[i + 2]);
            }
        }
        cout << h[0] << '\n'; 
    }
    return 0;
}