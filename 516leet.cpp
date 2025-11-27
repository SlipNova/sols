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

int longestPalindromeSubseq(string str) {
    int n = str.length();
    vector <vector <int>> dp(n, vector <int> (n, 0));
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        cout << longestPalindromeSubseq(str) << '\n';
    }
    return 0;
}
