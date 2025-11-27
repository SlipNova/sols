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

int reverse(int x) {
    long res = 0;
    while (x) {
        res = res * 10 + x % 10;
        x /= 10;
        if (res > INT_MAX || res < INT_MIN) {
            return 0;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        cout << reverse(x) << '\n';
    }
    return 0;
}