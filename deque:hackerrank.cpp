
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <deque>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

int maxi(deque<int> a) {
    int k = 0;
    for (auto it : a) {
        if (it > k) {
            k = it;
        }
    }
    return k;
}

void sol(vector<int> a, int n, int k) {
    deque<int> d;
    for (int i = 0; i < k; i++) {
        d.push_back(a[i]);
    }
    int l = maxi(d);
    int j = 0;
    int i = k;
    while (j <= n - k ) {
        cout << l << ' ';
        if (l != *d.begin()) {
            d.pop_front();
            d.push_back(a[i]);
            if (a[i] > l) {
                l = a[i];
            }
        }
        else {
            d.pop_front();
            d.push_back(a[i]);
            l = maxi(d);
        }
        i++;
        j++;
    }
    cout << '\n';
}

int main() {
    int tt; 
    cin >> tt;
    while (tt--) {
        int n, k, maxx;
        int j = 1;
        vector<int> v;
        cin >> n;
        cin >> k;
        for (int i = 0; i < n; i++) {
            int t; 
            cin >> t;
            v.push_back(t);
        }
        sol(v, n, k);

    }
}