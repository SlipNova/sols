#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

ll maximus(vector <ll> &b) {
    ll m = abs(b[0]);
    int j = 0;
    for (int i = 0; i < b.size(); i++) {
        if (abs(b[i]) > m) {
            m = abs(b[i]);
            j = i;
        }
    }
    return j;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        ll n, k;
        cin >> n >> k;
        ll sm = 0;
        vector <ll> a(n), b(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            sm += a[i] * b[i];
        }
       sm += k * abs(b[maximus(b)]);
       cout << sm << '\n';
    }
    return 0;
}