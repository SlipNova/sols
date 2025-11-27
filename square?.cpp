#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }
    return 0;
}