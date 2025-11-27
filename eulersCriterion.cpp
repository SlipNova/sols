#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long binPow(long long a, long long b, long long m) {
    if (a == 0) return 1ll;
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

bool solve(int a, int m) {
    if (m == 2) {
        return true;
    }
    int t = (m - 1) / 2;
    if (binPow(a, t, m) == 1) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int a, m; 
        cin >> a >> m;
        cout << (solve(a, m) ? "YES" : "NO") << '\n';
    }
    return 0;
}
 
