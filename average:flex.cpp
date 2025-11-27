
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
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort (a.begin(), a.end());
        int l = 0;
        int m = 0;
        int b = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                
            }
        }
    }
    return 0;
}

