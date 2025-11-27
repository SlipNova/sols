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

void moveZeroes (vector <int>& a) {
    int n = a.size();
    int nxt = 0;
    for (int x: a) {
        if (x != 0) {
            a[nxt] = x;
            nxt++;
        }
    }
    for (int i = nxt; i < n; i++) {
        a[i] = 0;
    }
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
        for (int it: a) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    return 0;
}