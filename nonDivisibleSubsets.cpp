#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

int nonDivisibleSubset(vector<int> s, int k) {
    int n = s.size();
    vector<int> freq(k, 0);
    int sol = 0;
    for (int i = 0; i < n; i++) {
        s[i] = s[i] % k;
        freq[s[i]]++;
    }
    if (freq[0] >= 1) {
        sol++;
    }
    for (int i = 1; i <= k / 2; i++) {
        if (i == k - i) {
            sol += 1;
            break;
        }
        sol += max(freq[i], freq[k - i]);
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> s(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        cout << nonDivisibleSubset(s, k) << '\n';
    }
    return 0;
}