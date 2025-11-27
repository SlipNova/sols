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

string longestCommonPrefix(vector <string> &stars) {
    string str = "";
    int n =  stars.size();
    int len = stars[0].length();
    for (int i = 0; i < n; i++) {
        if (stars[i].length() < len) {
            len = stars[i].length();
        }
    }
    for (int i = 0; i < len; i++) {
        set <char> s;
        for (int j = 0; j < n; j++) {
            s.insert(stars[j][i]);
        }
        if (s.size() == 1) {
            str += stars[0][i];
        }
        else {
            break;
        }
    }
    return str;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <string> star(n);
        for (int i = 0; i > n; i++) {
            cin >> star[i];
        }
        
    }
    return 0;
}