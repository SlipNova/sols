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


// O(n^2) isn't good enough, I think.
// if len = 1, then a0 a1, a1 a2, .... an-1
// So this is O(n^3), which is essentially brute force appraoch to the problem
int subarraySum3(vector <int> &a, int k) {
    int n = a.size();
    int count = 0;
    for (int len = 1; len < n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int sum = 0;
            for (int j = i; j < i + len; j++) {
                sum += a[j];
            }
            if (sum == k) {
                count++;
            }
        }
    }
    return count;
}

int subarraySum2(vector <int> &a, int k) {
    int n = a.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            if (sum == 0) cout << 'h';
            cout << a[j] << 't';
            sum += a[j];
            cout << sum << endl;
            if (sum == k) {
                count++;
            }
        }
    }
    return count;
}

// O(n) solution
int subarraySum(vector<int>& a, int k) {
    int n = a.size();
    int count = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i]; 
        if (mp.find(sum - k) != mp.end()) {
            count += mp[sum - k];
        }        
        mp[sum]++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n ;i++) {
            cin >> a[i];
        }
        cout << subarraySum(a,k) << '\n';
    }
    return 0;
}