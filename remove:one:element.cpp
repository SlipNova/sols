
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

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        set<long long> s;
        set<long long> sd;
        cin >> n;
        vector<long long> a;
        vector<long long> b;
        for (int i = 0; i < n; i++) {
            long long c;
            cin >> c;
            a.push_back(c);
            s.insert(c);
        }
        for (int i = 0; i < n-1; i++) {
            long long a;
            cin >> a;
            b.push_back(a);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
     
        long long sol;
        sol = b[0] - a[1];
   
        for (auto it: b){
            if(s.count(it-sol) == 0) {
                sol = b[0] - a[0];
                break;
            }
        }
        if(sol <= 0) {
            sol = b[0] - a[0];
        }
        cout << sol << '\n';

    }
    
    return 0;
}

