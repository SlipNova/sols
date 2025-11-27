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

vector <vector <string>> groupAnagrams(vector <string>& a) {
    int n = a.size();
    unordered_map <string, vector <string>> mp;
    for (string str: a) {
        string temp = str;
        sort(temp.begin(), temp.end());
        mp[temp].push_back(str);
    }
    vector <vector <string>> sol;
    for (auto s: mp) {
        sol.push_back(s.second);
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector <vector <string>> S = groupAnagrams(a);
        for (int i = 0; i < S.size(); i++) {
            for (int j = 0; j < S[i].size(); j++) {
                cout << S[i][j] << ' ';
            } 
            cout << '\n';
        }
    }
    return 0;
}