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

// O(sqrt(n))
int mySqrt1(long long x) {
    if (x < 1) return 0;
    if (x == 1) return 1;
    long long i = 1;
    while (i * i <= x) {
        i++;
    }
    i--;
    return (int) i;
}
// O(log(n))
int mySqrt(int x) {
    if (x == 0 || x == 1) return x;
    int start = 1;
    int end = x;
    int mid = -1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        long long square = static_cast <long long> (mid) * mid;
        if (square > x) end = mid - 1;
        else if (square == x) return mid;
        else start = mid + 1;
    }
    return static_cast <int> (round(end));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        cout << mySqrt(n) << '\n';
    }
    return 0;
}