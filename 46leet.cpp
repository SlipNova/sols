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

void search(vector <vector <int>>& All, vector <int>& permutation, vector <bool>& used, vector <int> a) {
    if (permutation.size() == a.size()) {
        All.push_back(permutation);
        return;
    }
    for (int i = 0; i < a.size(); i++) {
        if (used[i]) {
            continue;
        }
        used[i] = true;
        permutation.push_back(a[i]);
        search(All, permutation, used, a);
        used[i] = false;
        permutation.pop_back();

    }
}

vector <vector <int>> permute(vector <int>& a) {
    int n = a.size();
    vector <vector <int>> All;
    vector <int> permutation;
    vector <bool> used(n, false);
    search(All, permutation, used, a);
    return All;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector <vector <int>> perms = permute(a);
        for (int i = 0; i < perms.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) {
                    cout << ' ';
                }
                cout << perms[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}