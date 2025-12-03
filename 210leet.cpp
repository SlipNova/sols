#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

using ll = long long;
using ld = long double;

const int MOD = 1e9+7;
const ld PI = acos((ld)-1);

template<class T> bool ckmin(T &a, const T &b) {return b < a ? a = b, 1 : 0;}
template<class T> bool ckmax(T &a, const T &b) {return a < b ? a = b, 1 : 0;}


template <typename T> 
struct edge {
    int from;
    int to;
    T cost;
};

template <typename T>
class graph {
public: 
    int n;
    vector<vector<int>> al;
    vector<edge<T>> edges;

    graph(int _n) : n(_n) {
        al.resize(_n);
    }
};

bool dfs(graph<int> &g, int s, vector<bool> &visited, vector<bool> &instack) {
    visited[s] = true;
    instack[s] = true;
    for (int it: g.al[s]) {
        if (!visited[it] && dfs(g, it, visited, instack)) {
            return true;
        }
        else if (instack[it]) {
            return true;
        }
    }
    instack[s] = false;
    return false;
}

bool containsCycle (graph<int>& g) {
    int n = g.n;
    vector<bool> visited(n, false), instack(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i] && dfs(g, i, visited, instack)) {
            return true;
        }
    }
    return false;
}

// iterative
vector<int> topSort(graph<int> &g) {
    int n = g.n;
    vector<int> order;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            stack<pair<int, bool>> st;
            st.push({i, false});
            while (!st.empty()) {
                auto [node, done] = st.top();
                st.pop();
                
                if (done) {
                    order.push_back(node);
                    continue;
                }

                if (!visited[node]) {
                    visited[node] = true;
                    st.push({node, true});
                    for (int neigh: g.al[node]) {
                        if (!visited[neigh]) {
                            st.push({neigh, false});
                        }
                    }
                }
            }
        }
    }

    reverse(order.begin(), order.end());
    return order;
}

// recursive
void dfsRS(graph<int> &g, int s, vector<bool> &visited, vector<int> &order) {
    visited[s] = true;
    for (auto it: g.al[s]) {
        if (!visited[it]) {
            dfsRS(g, it, visited, order);
        }
    }
    order.push_back(s);
}

vector<int> RtopSort(graph<int> &g) {
    int n = g.n;
    vector<int> order;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfsRS(g, i, visited, order);
        }
    }
    reverse(order.begin(), order.end());
    return order;
}

vector<int> findOrder(int n, vector<vector<int>> &preq) {
    graph<int> g(n);
    int m = preq.size();
    for (int i = 0; i < m; i++) {
        edge<int> e = {preq[i][1], preq[i][0]};
        g.edges.push_back(e);
        g.al[preq[i][1]].push_back(preq[i][0]);
    }
    vector<int> ans = topSort(g);
    if (containsCycle(g)) return {};
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
        vector<vector<int>> preq(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            cin >> preq[i][0] >> preq[i][1];
        }
        vector<int> ans = findOrder(n, preq);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i != n - 1 ? ' ' : '\n');
        }
    }
    return 0;
}