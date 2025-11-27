#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

bool checkValid(vector <vector <int> > &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        map <int, int> row, col;
        for (int j = 0; j < n; j++) {
            int r = matrix[i][j]; 
            int c = matrix[j][i];
            if (row.find(r) != row.end() || col.find(c) != col.end()) {
                return false;
            }
            row[r] = 1;
            col[c] = 1;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n; 
        vector <vector <int> > matrix(n, vector <int> (n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        bool val = checkValid(matrix);
        cout << (val ? "true" : "false") << '\n';
    }
    return 0;
}

