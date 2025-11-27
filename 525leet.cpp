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

int findMaxLength(vector <int>& a) {
    int n = a.size();
    int pref, ans;
    pref = ans = 0;
    unordered_map <int, int> mp;
    mp[0] = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) pref += -1;
        else pref += 1;
        if (mp.find(pref) != mp.end()) {
            ans = max(ans, i - mp[pref]);
        }
        else {
            mp[pref] = i;
        }
    }
    return ans;
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
    }
    return 0;
}
