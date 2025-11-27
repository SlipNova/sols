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

int removeElement(vector <int>& a, int val) {
    int n = a.size();
    int kk = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != val) {
            a[kk] = a[i];
            kk++;
        }
    }
    return kk;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, val;
        cin >> n >> val;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << removeElement(a, val) << '\n';
    }
    return 0;
}