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

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

#include <unordered_map>
#include <iostream>

using namespace std;

template <typename T>
class UnionFind {
    unordered_map<T, T> parent;
    unordered_map<T, int> rank;
public:
    UnionFind() {}

    void add(const T& _ele) {
        if (parent.find(_ele) == parent.end()) {
            parent[_ele] = _ele;
            rank[_ele] = 1;
        }
    }

    T find(const T& _ele) {
        if (parent[_ele] != _ele) {
            parent[_ele] = find(parent[_ele]);
        }
        return parent[_ele];
    }

    void unite(const T& P, const T& Q) {
        T rootP = find(P);
        T rootQ = find(Q);
        if (rootP != rootQ) {
            if (rank[rootP] > rank[rootQ]) {
                parent[rootQ] = rootP;
            }
            else if (rank[rootP] < rank[rootQ]) {
                parent[rootP] = rootQ;
            }
            else {
                parent[rootQ] = rootP;
                rank[rootP] += 1;
            }
        }
    }
};

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    UnionFind <int> uf;
    for (int i = 0; i < n; i++) {
        uf.add(i);
    }
    for (int i = 0; i < edges.size(); i++) {
        uf.unite(edges[i][0], edges[i][1]);
    }
    return (uf.find(source) == uf.find(destination));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, source, destination;
        cin >> n >> m;
        vector <vector <int>> edges(m);
        for (int i = 0; i < m; i++) {
            vector <int> temp(2);
            for (int j = 0; j < 2; j++) {
                cin >> temp[0] >> temp[1];
            }
            edges[i] = temp;
        }
        cout << (validPath(n, edges, source, destination) ? "YES" : "NO") << '\n';
    }
    return 0;
}