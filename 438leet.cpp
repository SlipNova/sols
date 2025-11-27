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

bool same(string str, string s) {
    int n = str.size();
    int m = s.size();
    if (n != m) {
        return false;
    }
    vector<int> a(26, 0);
    vector<int> b(26, 0);
    for (int i = 0; i < n; i++) {
        a[str[i] - 'a']++;
        b[s[i] - 'a']++;
    }
    return (a == b);
}
// O (n * m)
vector<int> findAnagrams1(string s, string p) {
    swap(s, p);
    vector<int> ans;
    int n = s.length();
    int m = p.length();
    if (n > m) {
        return ans;
    }
    for (int i = 0; i <= m - n; i++) {
        string s2 = string(p.begin() + i, p.begin() + i + n);
        cout << s2 << ' ' << s << endl;
        if (same(s2, s)) {
            ans.push_back(i);
        }
    }
    return ans;
}

// s is longer one
vector<int> findAnagrams(string s, string p) {
    int n = s.size();
    int m = p.size();
    vector<int> sol;
    if (m > n) {
        return sol;
    }
    vector<int> a(26, 0), b(26, 0);
    int left = 0;
    int right = m - 1;
    for (int i = 0; i < m; i++) {
        a[s[i] - 'a']++;
        b[p[i] - 'a']++;
    }
    while (right <= n - 1) {
        if (a == b) {
            sol.push_back(left);
        }
        a[s[left] - 'a']--;
        a[s[(right < n - 1) ? right + 1 : right] - 'a']++;
        left++;
        right++;
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string s, p;
        cin >> s >> p;
        vector <int> A = findAnagrams(s, p);
        for (int i = 0; i < A.size(); i++) {
            if (i > 0) {
                cout << ' ';
            }
            cout << A[i];
        }
        cout << '\n';
    }
    return 0;
}