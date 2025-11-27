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

void search(int start, int n, int k, vector <int>& subset, vector <vector <int>>& All) {
    if (start == n) {
        if (subset.size() == k) {
            All.push_back(subset);
        }
    }
    else {
        search(start + 1, n, k, subset, All);
        subset.push_back(start);
        search(start + 1, n, k, subset, All);
        subset.pop_back();
    }
}

vector <vector <int>> combine(int n, int k) {
    vector <int> subset;
    vector <vector <int>> All;
    search(1, n + 1, k, subset, All);
    return All;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector <vector <int>> Ans = combine(n, k);
        for (int i = 0; i < Ans.size(); i++) {
            for (int j = 0; j < Ans[i].size(); j++) {
                if (j > 0) {
                    cout << ' ';
                }
                cout << Ans[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}