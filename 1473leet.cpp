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

string stringShifts(string str, vector <vector <int>>& shift) {
    int total = 0;
    for (vector <int> pp: shift) {
        if (pp[0] == 0) {
            total -= pp[1];
        }
        else {
            total += pp[1];
        }
    }
    int n = str.length();
    total %= n;
    if (total < 0) {
        total += n;
    }
    return str.substr(n - total) + str.substr(0, n - total);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        int n;
        cin >> n;
        vector <vector <int>> a(n, vector <int> (2));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
        cout << stringShifts(str, a) << '\n';
    }
    return 0;
}