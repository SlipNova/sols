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
// 5 = 101
// x = 2 n = 5
// res = 2, x = 4 n = 10
// res = 2, x = 16 n = 1
// res = 2 * 16 = 32 x = 16^2 n = 0
double myPow(double x, int m) {
    long long n = (long long)m;
    double res = (double)1;
    if (x == 1 || n == 0)
        return 1;
    if (n < 0) {
        x = (double)1 / x;
        n *= -1;
    }
    while (n > 0) {
        if (n & 1) {
            res = res * x;
        }
        x *= x;
        n >>= 1;
    }
    return res;
}