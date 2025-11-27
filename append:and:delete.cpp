
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std :: chrono;

string appendAndDelete(string s, string t, int k) {
    if (k >= t.size() + s.size()) return "Yes";
    int same = min(t.size(), s.size());
    for (int i = 0; i < min(t.size(), s.size()); i++){
        if (s[i] != t[i]){
            same = i;
            break;
        }
    }
    k -= (s.size() - same);
    k -= (t.size() - same);
    return (k >= 0 && k % 2 == 0) ? "Yes" : "No";
}


int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        string s, t;
        cin >> s >> t;
        int k;
        cin >> k;
        cout << appendAndDelete(s, t, k) << '\n';
    }
    return 0;
}

