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

int solve(vector <int> &st) {
    if (st.size() == 0) return 0;
    int mx = st[0];
    for (int i = 0; i < st.size(); i++) {
        if (st[i] > mx) {
            mx = st[i];
        }
    }
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int qq;
    cin >> qq;
    vector <int> st;
    while (qq--) {
        int q;
        cin >> q;
        if (q == 1) {
            int x; 
            cin >> x;
            st.push_back(x);
        }
        else if (q == 2) {
            st.pop_back();
        }
        else {
            cout << solve(st) << '\n';
        }
    }
    return 0;
}