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

int partitionString(string str) {
    int n = str.length();
    int count = 0;
    unordered_map <char,int > seen;
    for (int i = 0; i < n; i++) {
        if (seen.find(str[i]) != seen.end()) {
            seen.clear();
            seen[str[i]]++;
            count++;
        }
        else {
            seen[str[i]]++;
        }
    }
    count++;
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        cout << partitionString(str) << '\n';
    }
    return 0;
}