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

bool isIsomorphic(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    map <char, char> mp, mpp;
    int n = str1.length();
    for (int i = 0; i < n; i++) {
        if (mp.find(str1[i]) != mp.end()) {
            if (mp[str1[i]] != str2[i]) {
                return false;
            }
        }
        if (mpp.find(str2[i]) != mpp.end()) {
            if (mpp[str2[i]] != str1[i]) {
                return false;
            }
        }
        mpp[str2[i]] = str1[i];
        mp[str1[i]] = str2[i];
    }
    for (int i = 0; i < n; i++) {
        str1[i] = mp[str1[i]];
    }
    if (str1 != str2) {
        return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str1, str2;
        cin >> str1 >> str2;
        cout << (isIsomorphic(str1, str2) ? "True" : "False") << '\n';
    }
    return 0;
}