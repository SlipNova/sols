#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

const vector<string> vals = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void combine(vector<string> &k, string str) {
    if (k.size() == 0) {
    for (int i = 0; i < str.size(); i++) {
        string temp(1, str[i]); 
        k.push_back(temp);
    }
        return;
    }
    vector<string> temp;
    for (int i = 0; i < k.size(); i++) {
        for (int j = 0; j < str.size(); j++) {
            temp.push_back(k[i] + str[j]);
        }
    }
    k = temp;
}

vector<string> letterCombinations(string digits) {
    vector<string> sol;
    int n = digits.size();
    for (int i = 0; i < n; i++) {
        int k = digits[i] - '0';
        combine(sol, vals[k]);
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        string digits;
        cin >> digits;
        vector<string> a = letterCombinations(digits);
        for (int i = 0; i < a.size(); i++) {
            if (i == (a.size() - 1)) {
                cout << a[i] << '\n';
            }
            else {
                cout << a[i] << ' ';
            }
        }
    }
    return 0;
}