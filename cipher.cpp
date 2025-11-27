
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <stdexcept>

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 7;

using namespace std;

string o(char a, char b) {
    if (a == b) {
        return "0";
    }
    else {
        return "1";
    }
}

string cipher(int k, string str) {
    int n = str.length() - k + 1;
    string res = "";
    string accum = "0";
    for (int i = 0; i < n; i++) {
         res += o(str[i], accum[0]);
         accum = o(accum[0], res[i]);
         if (i >= k - 1) {
             accum = o(accum[0], res[i - k + 1]);
         }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int k;
        cin >> k;
        string str;
        cin >> str;
        cout << cipher(k, str) << '\n';
    }
    return 0;
}


