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

    int uniqueCount() {
        unordered_set <T> s;
        for (const auto& it: parent) {
            s.insert(find(it.first));
        }
        return s.size();
    }
};

int findCircleNum(vector <vector <int>>& connected) {
    int n = connected.size();
    UnionFind <int> uf;
    for (int i = 0; i < n; i++) {
        uf.add(i);
        for (int j = 0; j < n; j++) {
            if (connected[i][j] == 1) {
                uf.add(j);
                uf.unite(i, j);
            }
        }
    }
    int ans = uf.uniqueCount();
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <vector <int>> connected(n, vector <int> (n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> connected[i][j];
            }
        }
        cout << findCircleNum(connected) << '\n';
    }
    return 0;
}