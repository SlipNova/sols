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

const int n = 9;

bool check(vector <vector <char> > &board, int x, int y) {
    unordered_set <char> seen;
    for (int i = x; i < x + 3; i++) {
        for (int j = y; j < y + 3; j++) {
            char c = board[i][j];
            if (c != '.' && seen.count(c)) {
                return false;
            }
            seen.insert(c);
        }
    }
    return true;
}

bool isValidSudoku(vector <vector <char> > &board) {
    for (int i = 0; i < n; i++) {
        unordered_set <char> row, col;
        for (int j = 0; j < n; j++) {
            char rowchar = board[i][j];
            char colchar = board[j][i];
            if (rowchar != '.' && row.count(rowchar)) {
                return false;
            }
            if (colchar != '.' && col.count(colchar)) {
                return false;
            }
            row.insert(rowchar);
            col.insert(colchar);
        }
    }
    for (int i = 0; i < n; i += 3) {
        for (int j = 0; j < n; j+= 3) {
            if (!check(board, i, j)) {
                return false;
            }
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
        vector <vector <char> > board(n, vector <char> (n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> board[i][j];
            }
        }
        bool val = isValidSudoku(board);
        cout << (val ? "true" : "false") << '\n';
    }
    return 0;
}
