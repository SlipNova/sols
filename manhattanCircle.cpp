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
        int n, m;
        cin >> n >> m;
        vector <int> top(2), bot(2);
        bool k = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                if (c == '#') {
                    if (k) {
                        top[0] = i + 1;
                        top[1] = j + 1;
                        k = false;
                    }
                    bot[0] = i + 1;
                    bot[1] = j + 1;
                }
            }
        }
        int x = (top[0] + bot[0]) / 2;
        int y = (top[1] + bot[1]) / 2;
        cout << x << ' ' << y << '\n';
    }
    return 0;
}