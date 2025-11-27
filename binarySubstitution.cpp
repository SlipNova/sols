#include <iostream>
#include <vector>
#include <string>
#define MOD 998244353

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        int n =  str.length();
        vector <int> dp(n);
        dp[0] = 1;
        if (str[0] == str[1]){
            dp[1] = 1;
        }
        else {
            dp[1] = 2;
        }
        for (int i = 2; i < n; i++) {
            if (str[i] == str[i - 1]) {
                dp[i] = dp[i - 1] % MOD;
            }
            else {
                dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
            }
        }
        cout << dp[n - 1] << '\n';
    }
    return 0;
}