#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

int maximumDetonation(vector<vector<int>>& bombs) {
    using ll = long long;
    int n = bombs.size();
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            ll a, b, c;
            a = bombs[i][0] - bombs[j][0];
            b = bombs[i][1] - bombs[j][1];
            c = bombs[i][2];
            a *= a;
            b *= b;
            c *= c;
            if (a + b <= c) {
                adj[i].push_back(j);
            }
        }
    }
    auto dfs = [&](int node) {
        int count = 0;
        vector<bool> visited(n, false);
        stack<int> s;
        visited[node] = true;
        s.push(node);
        while (!s.empty()) {
            int curr = s.top();
            s.pop();
            count++;
            for (auto it : adj[curr]) {
                if (!visited[it]) {
                    visited[it] = true;
                    s.push(it);
                }
            }
        }
        return count;
    };
    auto bfs = [&](int node) {
        vector<int> visited(n, false);
        int count = 0;
        queue<int> q;
        visited[node] = true;
        q.push(node);
        while (!q.empty()) {
            int curr = q.front();
            visited[curr] = true;
            count++;
            q.pop();
            for (auto it : adj[curr]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
        return count;
    };
    int maxx = 1;
    int c = 1;
    for (int i = 0; i < n; i++) {
        maxx = max(maxx, dfs(i));
        c = max(c, bfs(i));
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<vector<int>> bombs(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> bombs[i][j];
            }
        }
        cout << maximumDetonation(bombs) << '\n';
    }
    return 0;
}