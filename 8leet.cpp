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

int myAtoi(string str) {
    int n = str.length();
    int i = 0;
    while (i < n && str[i] == ' ') {
        i++;
    }
    if (i >= n) return 0;
    bool pos = true;
    if (str[i] == '-') {
        pos = false;
        i++;
    } 
    else if (str[i] == '+') {
        i++;
    }
    long long result = 0;
    while (i < n && isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        if (result > INT_MAX) {
            return pos ? INT_MAX : INT_MIN;
        }
        i++;
    }
    return pos ? (int)result : -(int)result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    cin.ignore();
    while (tt--) {
        string str;
        getline(cin, str);
        cout << myAtoi(str) << '\n';
    }
    return 0;
}