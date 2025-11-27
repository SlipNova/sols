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

vector<vector<int> > generate(int n) {
    vector<vector<int> > sol;
    for (int i = 0; i < n; i++) {
        vector<int> h(i + 1);
        h[0] = 1;
        h[i] = 1;
        for (int j = 1; j <= (i - 1); j++) {
            h[j] = sol[i - 1][j - 1] + sol[i - 1][j];
        }
        sol.push_back(h);
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <vector <int> > sol = generate(n);
        for (int i = 0; i < sol.size(); i++) {
            for (int j = 0; j < sol[i].size(); j++) {
                cout << sol[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}