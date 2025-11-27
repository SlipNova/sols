#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

// it is given that edges form a valid star graph
int findCenter(vector<vector<int>> &edges) {
    int a, b, c, d;
    a = edges[0][0];
    b = edges[0][1];
    c = edges[1][0];
    d = edges[1][1];
    if (a == c || a == d) {
        return a;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int e;
        cin >> e;
        vector<vector<int>> edges(e, vector<int>(2));
        for (int i = 0; i < e; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> edges[i][j];
            }
        }
        cout << findCenter(edges) << '\n';
    }
    return 0;
}