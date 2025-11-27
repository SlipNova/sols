
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

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        vector<int> b(n), sol(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) {
            sol[a[i].second] = b[i];
        }
        for (int i = 0; i < n; i++) {
            cout << sol[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
