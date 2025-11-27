
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

long maximumSum(vector<long> a, long m) {
    int n = a.size();
    vector<long> v(n);
    for (long i = 0; i < n; i++) {
        v[i] = a[i] % m;
        cout << v[i] << '\n';
    }
    long localMax = 0; 
    long globalMax = 0; 
    for (long i = 0; i < n; i++) {
       localMax = max(localMax, ((v[i] + localMax) % m));
       globalMax = max(globalMax, localMax);
    }
    return globalMax;
}

int main(){
    int tt; 
    cin >> tt;
    while (tt--) {
        long n, m;
        cin >> n;
        cin >> m;
        vector<long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maximumSum(a, m) << '\n';
    }
    return 0;
}


