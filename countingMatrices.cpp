
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <numeric>
#include <cmath>
#include <chrono>
#define ll long long int

using namespace std;
using namespace std::chrono;

map <ll, ll> mp;

int func(int n, int x) {
    return n * x - x * x;
}

void setdp(vector <int> &dp, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i * j < n) {
                dp[j * i]++;
            }
            else {
                break;
            }
        }
    }
}

void setdpp(vector <int> &dpp, vector <int> &dp ,int n) {
    for (int i = 1; i < n; i++) {
        dpp[i] = dpp[i - 1] + dp[i - 1];
    }
}

int dppval(int k) {
    k--;
    if (mp.find(k) != mp.end()) {
        return mp[k];
    }
    long long j = sqrt(k);
    long long kk = 0;
    for (long long i = 1; i <= j; i++) {
        kk += k / i;
    }
    kk *= 2;
    kk = kk - j * j;
    mp[k] = kk;
    return kk;
}

int sol1() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        ll sol = 0;
        for (int i = 1; i < n; i++) {
            sol += dppval(func(n, i));
        }
        cout << sol << '\n';
    }
    return 0;
}


int sol2() {
    int tt;
    cin >> tt;
    int mx = (2500 * 2500 - 1)/4 + 2;
    vector <int> dp(mx, 0), dpp(mx, 0);
    setdp(dp, mx);
    setdpp(dpp, dp, mx);
    while (tt--) {
        int n;
        cin >> n;
        ll sol = 0;
        for (int i = 1; i < n; i++) {
            sol += dpp[func(n, i)];
        }
        cout << sol << '\n';
    }
    return 0;
}

int main() {
    sol1();
    return 0;
}