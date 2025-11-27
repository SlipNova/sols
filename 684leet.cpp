
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <stdexcept>

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 7;

using namespace std;

template <typename T>
class UnionFind {
    unordered_map <T, T> parent;
    unordered_map <T, int> rank;
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
                parent[rootQ] = rootP;
            }
            else {
                parent[rootQ] = rootP;
                rank[rootP] += 1;
            }
        }
    } 

};


vector<int> findRedundantConnection(vector <vector<int>>& E) {
    UnionFind <int> uf;
    vector <int> sol;
    for (int i = 0; i < E.size(); i++) {
        if (uf.find(E[i][0]) == uf.find(E[i][1])) {
            sol.push_back(E[i][0]);
            sol.push_back(E[i][1]);
            return sol;
        }
        uf.unite(E[i][0], E[i][1]);
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector <vector<int>> E;
    for (int i = 0; i < n; i++) {
        vector<int> temp(2);
        cin >> temp[0] >> temp[1];
        E.push_back(temp);
    }
    vector <int> sol = findRedundantConnection(E);
    for (int i = 0; i < 2; i++) {
        cout << sol[0] << sol[1] << endl;
    }
    return 0;
}

