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

bool validPalindrome(string str) {
    int n = str.length();
    int left = 0;
    int right = n - 1;
    auto check = [&] (string str) {
        int left = 0;
        int right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    };
    while (left < right) {
        if (str[left] == str[right]) {
            left++; 
            right--;
        }
        else {
            string str1 = str.substr(left, right - left);
            string str2 = str.substr(left + 1, right - left);
            if (check(str1) || check(str2)) {
                return true;
            }
            else {
                return false;
            }
        }
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
        cout << (validPalindrome(str) ? "True" : "False") << '\n';
    }
    return 0;
}