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

int tribonacci(int n) {
    if (n == 0) {
        return 0;
    }
    int a = 0, b = 1, c = 1;
    for (int i = 0; i < n - 2; ++i) {
        int tmp = a + b + c;
        a = b;
        b = c;
        c = tmp;
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        cout << tribonacci(n) << '\n';
    }
    return 0;
}