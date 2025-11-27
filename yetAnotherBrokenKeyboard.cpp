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


long long fn(int n) {
    long long sol = 1;
    if (n % 2 == 0) {
        sol *= (sol * n)/ 2;
        sol *= n + 1;
    }
    else {
        sol *= (n + 1) / 2;
        sol *= n;
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    unordered_map <char, int> mp;
    vector <char> ch(k);
    for (int i = 0; i < k; i++) {
        char k;
        cin >> k;
        mp[k]++;
    }
    vector <int> help;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (mp.find(str[i]) != mp.end()) {
            count++;
        }
        else {
            if (count != 0) help.push_back(count);
            count = 0;
        }
    }
    if (mp.find(str[n - 1]) != mp.end()) help.push_back(count);
    long long sol = 0;
    for (int i = 0; i < help.size(); i++) {
        sol += fn(help[i]);
    }
    cout << sol << '\n';
    return 0;
}