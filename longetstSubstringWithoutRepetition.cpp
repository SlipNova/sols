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

int lengthOfLongestSubstring(string str) {
    unordered_set<char> store;
    int len = 0, maxi = 0, left = 0;
    int n = str.length();
    for (int right = 0; right < n; right++) {
        char c = str[right];
        while (store.find(c) != store.end()) {
            store.erase(str[left]);
            left++;
        }
        store.insert(c);
        maxi = max(maxi, right - left + 1);
    }
    return maxi;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        cout << lengthOfLongestSubstring(str) << '\n';
    }
    return 0;
}