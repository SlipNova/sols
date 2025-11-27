#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

int jump(vector < int > & a) {
    int n = a.size();
    auto can_reach = [ & ](int start, int val, int n) {
        if (start + val >= n) {
            return true;
        }
        return false;
    };
    if (n == 1) {
        return 0;
    }
    int count = 0;
    int to = n - 1;
    while (true) {
        for (int j = 0; j < n; j++) {
            if (can_reach(j, a[j], to)) {
                count++;
                to = j;
                break;
            }
            if (j == n - 1) {
                return false;
            }
        }
        if (to == 0) {
            break;
        }
    }
    return count;
}

int jump(vector <int>& a) {
    int n = a.size();
    if (n == 1) {
        return 0;
    }
    int end, farthest, jumps;
    end = farthest = jumps = 0;
    for (int i = 0; i < n; i++) {
        farthest = max(farthest, i + a[i]);
        if (i == end) {
            jumps++;
            end = farthest;
            if (end >= n - 1) break;
        }
    }
    return jumps;
}

int main() {
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
        cout << jump(a) << '\n';
    }
    return 0;
}
