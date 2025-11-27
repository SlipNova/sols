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

int strStr(string str1, string str2) {
    if (str1.length() < str2.length()) {
        return -1;
    }
    for (int i = 0; i <= (str1.length() - str2.length()); i++) {
        string str = "";
        for (int j = i; j < (str2.length() + i); j++) {
            str += str1[j];
        }
        if (str == str2) {
            return i;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str1, str2;
        cin >> str1;
        cin >> str2;
        cout << strStr(str1, str2) << '\n';
    }
    return 0;
}