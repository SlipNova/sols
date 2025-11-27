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

int numWaterBottles(int a, int b) {
    int curr, empty, sol;
    empty = sol = 0;
    curr = a;
    while (curr != 0) {
        sol += curr;
        empty += curr;
        curr = empty / b;
        empty = empty % b;
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        cout << numWaterBottles(a, b) << '\n';
    }
    return 0;
}