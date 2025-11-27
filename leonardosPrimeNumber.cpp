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
 

int solve(long long n) {
    long long primorial [15] = {2, 6, 30, 210, 2310, 30030, 510510, 9699690, 223092870, 6469693230, 200560490130, 7420738134810, 304250263527210, 13082761331670030, 614889782588491410};
    int i = 0;
    while (primorial[i] <= n) {
        if (i == 14) {
            i++;
            break;
        }
        i++;
    }
    return i;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}