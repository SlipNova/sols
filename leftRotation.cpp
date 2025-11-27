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

vector <int> rotateleft(vector <int> &a, int d) {
    int n = a.size();
    vector <int> v(n, 0);
    d %= n;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (i < n - d) {
            v[i] = a[i + d]; 
        }
        else {
            v[i] = a[i - n + d];
        }
    }
    return v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    tt = 1;
    while(tt--) {
        int n, d;
        cin >> n >> d;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector <int> r = rotateleft(a, d);
        for (int i = 0; i < n; i++) {
            cout << r[i] << ' ';
        }
    }
    return 0;
}