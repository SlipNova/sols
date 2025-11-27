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
using namespace std::chrono;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n; 
        vector <int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector <int> c;
        for (int i = 0; i < n; i++) {
            if (b[i] == 0) {
                c.push_back(a[i]);
            }
        }
        sort(c.rbegin(), c.rend());
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == 1) {
                cout << a[i] << ' ';
            }
            else if (b[i] == 0) {
                cout << c[j] << ' ';
                j++;
            } 
        }
        cout << '\n';
    }
    return 0;
}

