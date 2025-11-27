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

int solve(vector <int> pos, vector <vector <int>> obs, int len) {
    return -1;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int len, k;
        cin >> len >> k;
        vector <vector <int>> obs(k, vector <int> (2));
        vector <int> pos(2);
        cin >> pos[0] >> pos[1];
        for (int i = 0; i < k; i++) {
            cin >> obs[i][0] >> obs[i][1];
        }
        cout << solve(pos, obs, len) << '\n';
    }
    return 0;
}