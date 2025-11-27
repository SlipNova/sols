
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

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int tot = 0;
        int i = 0;
        while (i < s.length()) {
            if (s[i] != s[i+1] && i!= s.length() - 1) {
                tot++;
                i+=2;
                continue;
            }
            i++;
        }
        cout << tot << '\n';
    }
    return 0;
}

