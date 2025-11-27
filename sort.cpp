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
        int n, q;
        cin >> n >> q;
        string s1, s2;
        cin >> s1 >> s2;
        vector <vector <int>> f(26, vector <int> (n + 1));
        for (int i = 0; i < n; i++) {
            f[(int) s1[i] - 'a'][i + 1]++;
            f[(int) s2[i] - 'a'][i + 1]--;
        }
        for (int c = 0; c < 26; c++) {
            for (int i = 0; i < n; i++) {
                f[c][i + 1] += f[c][i];
            }
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--;
            int ans = 0;
            for (int c = 0; c < 26; c++) {
                int x = f[c][r] - f[c][l];
                if (x > 0) ans += x;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}