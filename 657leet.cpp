#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

bool judgeCircle(string moves) {
    int x, y;
    x = 0;
    y = 0;
    for (int i = 0; i < moves.length(); i++) {
        if (moves[i] == 'U') y++;
        if (moves[i] == 'D') y--;
        if (moves[i] == 'R') x++;
        if (moves[i] == 'L') x--;
    }
    return (x == 0 && y == 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string moves;
        cin >> moves;
        cout << (judgeCircle(moves) ? "True" : "False") << '\n';
    }
    return 0;
}