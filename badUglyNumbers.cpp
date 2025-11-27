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

void solve(int n) {
    if (n == 1) {
        cout << -1;
        return;
    }
    if (n == 2) {
        cout << 23;
        return;
    }
    if (n == 3) {
        cout << 239;
        return;
    }
    vector <char> ans(n, '2');
    ans[n - 1] = '3';
    if (n % 3 == 1) {
        ans[n - 2] = '3';
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        solve(n);
        cout << '\n';
    }
    return 0;
}