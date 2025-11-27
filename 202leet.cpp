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

int f(int n) {
    int ans = 0;
    while (n) {
        int digi = n % 10;
        ans += digi * digi;
        n /= 10;
    }
    return ans;
}

bool isHappy(int n) {
    unordered_set <int> visited;
    while (true) {
        if (n == 1) {
            return true;
        }
        n = f(n);
        if (visited.count(n) == 1) {
            return false;
        }
        visited.insert(n);
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        cout << (isHappy(n) ? "True" : "False") << '\n';
    }
    return 0;
}