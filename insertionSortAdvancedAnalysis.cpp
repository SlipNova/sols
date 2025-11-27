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
#include <cmath> /////////////complete this later..
#include <chrono>

using namespace std;
using namespace std::chrono;

long long solve(vector <int> &a) {
    int n = a.size();
    sort(a.begin(), a.end());
    int count = 0;
    for (int i = 0; i < n; i++) {

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
        cout << solve(a) << '\n';
    }
    return 0;
}