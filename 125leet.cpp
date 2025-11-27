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

bool isPalindrome(string str) {
    int n = str.size();
    vector <char> s;
    for (int i = 0; i < n; i++) {
        if (isalpha(str[i])) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
            s.push_back(str[i]);
        }
        if ((str[i] - '0') >= 0 && (str[i] - '0') <= 9) {
            s.push_back(str[i]);
        }
    }
    int right = s.size() - 1;
    int left = 0;
    while (left <= right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        cout << (isPalindrome(str) ? "True" : "False") << '\n';
    }
    return 0;
}