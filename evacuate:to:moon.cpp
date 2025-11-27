
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std :: chrono;

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, h;
        cin >> n >> m >> h;
        vector <int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long f = 0;
        int ea = n - 1;
        int eb = m - 1;
        while (min(ea, eb) >= 0)  {
            long long t = a[ea];
            long long q = b[eb];
            f += min(t, q*h);
            ea--;
            eb--;
        }
        cout << f << '\n';
    }

    return 0;
}

