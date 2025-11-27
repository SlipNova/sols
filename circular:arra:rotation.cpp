
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    int q = queries.size();
    vector<int> key(n);
    vector<int> sol(n);
    vector<int> solu;
    for (int i = 0; i < n; i++) {
        key[i] = i;
    }
    for (int i = 0; i < n; i++) {
        int l = i;
        key[l] += (k % n);
        while (key[l] >= n) {
            key[l] %= n;
        }
        i = l; 
    }
    for (int i = 0; i < n; i++) {
        sol[key[i]] = a[i];
    }
    for (int i = 0; i < q; i++) {
        int l;
        l = sol[queries[i]];
        solu.push_back(l);
    }
    return solu;
}

int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        vector<int> queries(q);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> queries[i];
        }
        vector<int> sol;
        sol = circularArrayRotation(a, k, queries);
        for (int i = 0; i < q; i++) {
            cout << sol[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

