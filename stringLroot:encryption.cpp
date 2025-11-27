
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

string encryption(string s) {
    string str = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            str += s[i];
        }
    }
    int r = sqrt(str.length());
    int c = ceil(sqrt(str.length()));
    if (r*c < str.length()) {
        r = r + 1;
    }
    vector<vector<char>> ss(r, vector<char> (c, '`'));
    int k = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (k >= str.length()) {
                break;
            }
            ss[i][j] = str[k];
            k++;
        }
    }
    string sol = "";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            if (ss[j][i] == '`') {
                continue;
            }
            sol += ss[j][i];
        }
        sol += " ";
    }
    int len = str.length() + c - 1;
    return sol.substr(0, len);
}

int main(){
    int tt; 
    string t;
    cin >> tt;
    getline(cin, t);
    while (tt--) {
        string s;
        getline(cin, s);
        cout << encryption(s) << '\n';
    }
    return 0;
}

