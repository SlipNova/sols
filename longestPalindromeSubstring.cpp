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

bool check(string str, int i, int j) {
    int left = i;
    int right = j;
    while (left <= right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int longestPalindromeSubstringBrute(string str) {
    int n = str.length();
    int ans = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (check(str, i , j)) {
                ans = max(j - i + 1, ans);
            }
        }
    }
    return ans;
}

int longestPalindromeSubstringB(string str) {
    int n = str.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        cout << longestPalindromeSubstringBrute(str) << '\n';
    }
    return 0;
}
















