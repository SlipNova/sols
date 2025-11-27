
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
        int k;
        vector <int> a(10);
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }
        cin >> k;
        int ans = 10;
        while (k >= 0) {
            ans--;
            k -= a[ans];
            //cout << k << ' ' << ans << ' '<< endl;
        }
        ans++;
        cout << ans << '\n';
    }
    return 0;
}

