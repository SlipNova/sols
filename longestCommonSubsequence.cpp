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

//   a b c d e  --> this is j
// q 0 0 0 0 0
// a 1 1 1 1 1 
// b 
// e

void longestCommonSubsequence(vector <int> &s1, vector <int> &s2) {
    int n = s1.size();
    int m = s2.size();
    vector <vector <int>> dp(n + 1, vector <int> (m + 1, 0));
    for (int i = 1;  i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    int index = dp[n][m];
    vector <int> k(index);
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            k[index - 1] = s1[i - 1];
            index--;
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        }
        else {
            j--;
        }
    }
    for (int i = 0; i < k.size(); i++) {
        cout << k[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    //cin >> tt;
    tt = 1;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector <int> s1(n), s2(m);
        for (int i = 0; i < n; i++) {
            cin >> s1[i];
        }
        for (int j = 0; j < m; j++) {
            cin >> s2[j];
        }
        longestCommonSubsequence(s1, s2);
    }
    return 0;
}