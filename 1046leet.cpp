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

int lastStoneWeight(vector <int>& stones) {
    priority_queue <int> Q;
    for (int it: stones) {
        Q.push(it);
    }
    while (Q.size() > 1) {
        int f = Q.top();
        Q.pop();
        int s = Q.top();
        Q.pop();
        if (f - s) {
            Q.push(f - s);
        }
    }
    return (Q.empty() ? 0 : Q.top());
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
        cout << lastStoneWeight(a) << '\n';
    }
    return 0;
}