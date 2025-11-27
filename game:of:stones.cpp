
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

string gameOfStones(int n) {
    vector<int> dp(100, 0);
    dp[1] = 1;
    if (n >= 6) {
        for (int i = 6; i <= n; i++) {
            if (dp[i - 2] == 1 || dp[i - 3] == 1 || dp[i - 5] == 1) {
                dp[i] = 0;
            }
            else {
                dp[i] = 1;
            }
        }
    } 
    string str = "Second";
    if (dp[n] == 0) {
        str = "First";
    }
    return str;
}

int main(){
    int tt; 
    cin >> tt; 
    while (tt--) {
        int n;
        cin >> n;
        cout << gameOfStones(n) << '\n';
    }
    return 0;
}
