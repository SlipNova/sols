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


void solve(stack <int> &st1, stack <int> &st2, int q) {
    if (st1.empty() && st2.empty()) {
        return;
    }
    if (st2.empty()) {
        while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
    }
    if (q == 2) {
        st2.pop();
    }
    else {
        cout << st2.top() << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int qq;
    cin >> qq;
    stack <int> st1, st2;
    while (qq--) {
        int q;
        cin >> q;
        if (q == 1) {
            int n;
            cin >> n;
            st1.push(n);
        } 
        else {
            solve(st1, st2, q);
        }
    }
    return 0;
}