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

bool checkWin(vector <vector <char> > &board, char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
            return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}
string tictactoe(vector<vector<int>>& moves) {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X'; // Player A starts first
    for (int i = 0; i < moves.size(); ++i) {
        int row = moves[i][0];
        int col = moves[i][1];
        board[row][col] = currentPlayer;
        if (checkWin(board, currentPlayer)) {
            return currentPlayer == 'X' ? "A" : "B";
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    if (moves.size() == 9) {
        return "Draw";
    } else {
        return "Pending";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <vector <int> > a(n);
        for (int i = 0; i < n; i++) {
            vector <int> temp(2);
            cin >> temp[0] >> temp[1];
            a[i] = temp;
        }

    }
    return 0;
}