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

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

// using sorting O(nlogn)
bool checkInclusion1(string str1, string str2) {
    int n = str1.size();
    int m = str2.size();
    if (n > m) {
        return false;
    }
    sort(str1.begin(), str1.end());
    for (int left = 0; left + n - 1 <= m - 1; left++) {
        string str = string(str2.begin() + left, str2.begin() + left + n);
        sort(str.begin(), str.end());
        if (str1 == str) {
            return true;
        }
    }
    return false;
}

// using hastables
bool checkInclusion(string str1, string str2) {
    int n = str1.length();
    int m = str2.length();
    if (n > m) {
        return false;
    }
    vector <int> a(26, 0);
    vector <int> b(26, 0);
    for (int i = 0; i < n; i++) {
        a[str1[i] - 'a']++;
        b[str2[i] - 'a']++;
    }
    for (int i = n; i < m; i++) {
        if (a == b) {
            return true;
        }
        b[str2[i] - 'a']++;
        b[str2[i - n] - 'a']--;
    }
    return (a == b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str1, str2;
        cin >> str1 >> str2;
        cout << (checkInclusion(str1, str2) ? "YES" : "NO") << '\n';
    }
    return 0;
}