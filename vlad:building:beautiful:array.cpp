
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

using namespace std;

int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        int even = 0;
        cin >> a[0];
        if (a[0] % 2 == 0) {
            even++;
        }
        int inx = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                even++;
            }
            if (a[i] < inx) {
                inx = a[i];
            }
        }
        if (even == n || even == 0) {
            cout << "Yes" << '\n';
            continue;
        }
        if (inx % 2 == 1) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
        
    }
    return 0;
}

