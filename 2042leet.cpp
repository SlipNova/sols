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

bool areNumbersAscending(string str) {
    int n = str.length();
    vector<string> tokens;
    for (int i = 0; i < n; i++) {
        string st = "";
        while (str[i] != ' ' && i < n) {
            st += str[i];
            i++;
        }
        tokens.push_back(st);
    }
    int mx = -1;
    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i][0] - '0' <= 9 && tokens[i][0] >= 0) {
            int temp = stoi(tokens[i]);
            if (temp <= mx)
                return false;
            mx = temp;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    cin.ignore();
    while (tt--) {
        string str;
        getline(cin, str);
        cout << (areNumbersAscending(str) ? "True" : "False") << '\n';
    }
    return 0;
}