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
        vector <int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int rew = 0, reww = 0, pos = 0, neg = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) rew += a[i];
            else if (b[i] > a[i]) reww += b[i];
            else if (a[i] == 1) pos++;
            else if (a[i] == -1) neg++;
        }
        while (pos--) {
            if (rew < reww) rew++;
            else reww++;
        }
        while (neg--) {
            if (reww < rew) rew--;
            else reww--;
        }
        cout << min(rew, reww) << '\n';
    }

    return 0;
}