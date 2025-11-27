
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
        int n;
        cin >> n;
        vector<vector<long long>> a(n);
        for (int i = 0; i < n; i++) {
            vector<long long> b(n);
            for (int j = 0; j < n; j++) {
                cin >> b[j];
            }
            sort(b.begin(), b.end());
            a[i] = b;
        } 
        long long max = a[n - 1][n - 1];
        long long sum = max;
        for (int i = n - 2; i >= 0; i--) {
            int t = 0;
            for (int j = n - 1; j >= 0; j--) {
                if (a[i][j] < max) {
                    max = a[i][j];
                    sum += a[i][j];
                    t = 1;
                    break;
                }
            }
            if (t == 0) {
                sum = -1;
                break;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}

