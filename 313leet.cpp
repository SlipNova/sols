#include <iostream>
#include <unordered_set>

using namespace std;

using ll = long long;

// heap solution which is still too slow O(m * log n * n)
int nthsSuperUglyNumber(int m, vector<int>& primes) {
    int n = primes.size();
    priority_queue<ll, vector<ll>, greater<ll>> mh;
    unordered_set<ll> seen;
    mh.push(1);
    seen.insert(1);
    ll ugly = 1;
    for (int i = 0; i < m; i++) {
        ugly = mh.top();
        mh.pop();
        for (auto p : primes) {
            ll next = p * ugly;
            if (!seen.count(next)) {
                mh.push(next);
                seen.insert(next);
            }
        }
    }
    return ugly;
}

//same
int nthSuperUglyNumbers(int m, vector<int>& primes) {
    int n = primes.size();
    vector<ll> dp(m);
    dp[0] = 1;
    vector<int> idx(n, 0);
    vector<ll> nextVal(n);
    for (int i = 0; i < n; i++) {
        nextVal[i] = primes[i];
    }
    for (int i = 1; i < m; i++) {
        ll nextUgly = *min_element(nextVal.begin(), nextVal.end());
        dp[i] = nextUgly;
        for (int j = 0; j < n; j++) {
            if (nextVal[j] == nextUgly) {
                idx[j]++;
                nextVal[j] = dp[idx[j]] * primes[j];
            }
        }
    }
    return (int)dp[m - 1];
}
//same
int nthSuperUglyNumber(int m, vector<int>& primes) {
    int n = primes.size();
    vector<int> dp(m);
    vector<int> idx(n, 0);
    dp[0] = 1;
    vector<ll> nexts(n);
    // basically initilizing
    for (int i = 0; i < n; i++) {
        nexts[i] = primes[i];
    }
    for (int i = 1; i < m; i++) {
        ll nextUgly = *min_element(nexts.begin(), nexts.end());
        dp[i] = nextUgly;
        for (int j = 0; j < n; j++) {
            if (nextUgly == nexts[j]) {
                idx[j]++;
                nexts[j] = (ll)dp[idx[j]] * primes[j];
            }
        }
    }
    return dp[m - 1];
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        vector<int> primes(a, 0);
        for (int i = 0; i < a; i++) {
            cin >> primes[i];
        }
        cout << nthSuperUglyNumber(b, primes) << '\n';
    }
}