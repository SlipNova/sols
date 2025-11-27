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

using namespace std;
using namespace std::chrono;

const int mod = 1000000007;

long long fastExp(long long a, long long n, long long m) {
    if (n == 0) return 1ll;
    long long res = 1;
    a = (a % m);
    while (n > 0) {
        if (n & 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        n >>= 1;
    }
    return res;
}

long long solve(long n) {
    long long t = fastExp(n, 2, mod);
    return t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        long n; 
        cin >> n;
        cout << solve(n) << '\n';
        cout << mod << endl;
    }
    return 0;
}