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
    
vector<int> twoSum(vector<int>& vec, int target) {
    int n = vec.size();
    vector<int> sol;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int val = target - vec[i];
        if (mp.find(val) != mp.end()) {
            sol.push_back(mp[val]);
            sol.push_back(i);
            break;
        }
        mp[vec[i]] = i;
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, target;
        cin >> n >> target;
        vector <int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        vector <int> sol = twoSum(vec, target);
        for (int it: sol) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    return 0;
}