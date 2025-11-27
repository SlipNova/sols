
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
        int n, d;
        cin >> n >> d;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] - a[i - 1] < d && i != 0) {
                sum += a[i] + a[i - 1];
                i--;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}

