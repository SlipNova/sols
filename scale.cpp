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

void solve(vector <vector <char>> &a, int n, int k) {
    vector <vector <char>> sol;
    for (int i = 0; i < n; i += k) {
        vector <char> temp;
        for (int j = 0; j < n; j += k) {
            temp.push_back(a[i][j]);
        }
        sol.push_back(temp);
    }
    for (int i = 0; i < sol.size(); i++) {
        for (int j = 0; j < sol[i].size(); j++) {
            cout << sol[i][j];
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector <vector <char>> a;
        for (int i = 0; i < n; i++) {
            vector <char> temp(n);
            for (int j = 0; j < n; j++) {
                cin >> temp[j];
            }
            a.push_back(temp);
        }
        solve(a, n, k);
    }
    return 0;
}