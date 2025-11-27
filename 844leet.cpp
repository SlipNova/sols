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

bool backspaceCompare(string s, string t) {
    stack <int> first, second;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '#') {
            if (!first.empty()) {
                first.pop();
            }
        }
        else {
            first.push(s[i]);
        }
    }
    for (int j = 0; j < t.length(); j++) {
        if (t[j] == '#') {
            if (!second.empty()) {
                second.pop();
            }
        }
        else {
            second.push(t[j]);
        }
    }
    while (!first.empty() || !second.empty()) {
        if (first.empty()) return false;
        if (second.empty()) return false;
        if (first.top() != second.top()) {
            return false;
        }
        first.pop();
        second.pop();
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (backspaceCompare(s1, s2) ? "True" : "False") << '\n';
    }
    return 0;
}