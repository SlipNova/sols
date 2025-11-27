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
#include <bitset>

using namespace std;
using namespace std::chrono;

bool canJump(vector <int>& a) {
    int n = a.size();
    int canReach = 0;
    for (int i = 0; i <= canReach; i++) {
        if (i == n - 1) {
            return true;
        }
        canReach = max(canReach, i + a[i]);
    }
    return false;
}

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
        cout << (canJump(a) ? "True" : "False") << '\n';
    }
    return 0;
}