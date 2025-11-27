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

const int maxx = 1e5 + 1;

// using hashing ideas
int firstMissingPositive(vector <int>& a) {
    int n = a.size();
    bool has1 = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            has1 = true;
        }
        if (a[i] <= 0 || a[i] > n) {
            a[i] = 1;
        }
    }
    if (!has1) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        int val = abs(a[i]);
        if (val == n) {
            a[0] = -1 * abs(a[0]);
        }
        else {
            a[val] = -1 * abs(a[val]);
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > 0) {
            return i;
        }
    }
    if (a[0] > 0) {
        return n;
    }
    return n + 1;
}

// using cycle sort
int solve(vector <int>& a) {
    int n = a.size();
    int i = 0;
    while (i < n) {
        if (a[i] >= 1 && a[i] <= n && a[i] != a[a[i] - 1]) {
            swap(a[i], a[a[i] - 1]);
        }
        else {
            i++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != i + 1) {
            return i + 1;
        }
    }
    return n + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << solve(a) << '\n';
    }
    return 0;
}