#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

int findJudge(int n, vector<vector<int>> &trust) {
    vector<bool> seen(n, false);
    for (int i = 0; i < trust.size(); i++) {
        seen[trust[i][0] - 1] = true;
    }
    unordered_map<int, int> cand;
    for (int i = 0; i < n; i++) {
        if (!seen[i]) {
            cand[i + 1] = 0;
        }
    }
    for (int i = 0; i < trust.size(); i++) {
        if (cand.count(trust[i][1])) {
            cand[trust[i][1]]++;
        }
    }
    for (auto it: cand) {
        if (it.second == n - 1) {
            return it.first;
        } 
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> trust(k, vector<int> (2));
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> trust[i][j];
            }
        }
        cout << findJudge(n, trust) << '\n';
    }
    return 0;
}