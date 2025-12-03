#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

using ll = long long;
using ld = long double;

const int MOD = 1e9+7;
const ld PI = acos((ld)-1);

template<class T> bool ckmin(T &a, const T &b) {return b < a ? a = b, 1 : 0;}
template<class T> bool ckmax(T &a, const T &b) {return a < b ? a = b, 1 : 0;}


int bfs(int n, vector<vector<int>>& e, vector<bool>& visited, int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;
    int count = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto it : e[u]) {
            if (!visited[it]) {
                q.push(it);
                visited[it] = true;
                count++;
            }
        }
    }
    return count;
}

ll countPairs(int n, vector<vector<int>>& edges) {
    vector<vector<int>> e(n);
    for (int i = 0; i < edges.size(); i++) {
        e[edges[i][0]].push_back(edges[i][1]);
        e[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int> comps;
    vector<bool> visited(n, false);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            comps.push_back(bfs(n, e, visited, i));
            sum += comps.back();
        }
    }
    ll ans = 0;
    for (int i = 0; i < comps.size(); i++) {
        cout << comps[i] << (i != comps.size() - 1 ? ' ' : '\n');
        sum -= comps[i];
        ans += (ll)comps[i] * (sum);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> edges[i][j];
            }
        }
        cout << countPairs(n, edges) << '\n';
    }
    return 0;
}