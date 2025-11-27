#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    tt = 1;
    while (tt--) {
        vector<int> a(3);
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a[2] - a[0] >= 10) {
            cout << "check again" << '\n';
        }
        else {
            cout << "final " << a[1] << '\n';
        }
    }
    return 0;
}