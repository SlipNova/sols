#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

vector<int> getRow(int rowIndex) {
    vector<vector<int>> a;
    for (int i = 0; i < rowIndex + 1; i++) {
        vector<int> temp(i + 1, 1);
        for (int j = 0; j < i + 1; j++) {
            if (j == i || j == 0) continue;
            temp[j] = a[i - 1][j - 1] + a[i - 1][j];
        }
        a.push_back(temp);
    }
    return a[rowIndex];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int rowIndex;
        cin >> rowIndex;
        vector<int> sol = getRow(rowIndex);
        for (int i = 0; i < sol.size(); i++) {
            if (i == sol.size() - 1) {
                cout << sol[i] << '\n';
            }
            else {
                cout << sol[i] << ' ';
            }
        }
    }
    return 0;
}

