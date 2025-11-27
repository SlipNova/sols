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

// using hashing
int numberOfSubarrays1(vector <int> &a, int k) {
    int n = a.size();
    unordered_map <int,int> mp;
    int cc = 0, count = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            cc += 1;
        }
        if(mp.find(cc - k) != mp.end()) {
            count += mp[cc - k];
        }
        mp[cc]++;
    }
    return count;
}

// using sliding windows
int numberOfSubarrays2(vector <int> &a, int k) {
    int n = a.size();
    int left, currOdds, gap, count;
    left = currOdds = gap = count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            currOdds++;
        }
        if (currOdds == k) {
            gap = 0;
            while (currOdds == k) {
                currOdds -= a[left] % 2;
                left++;
                gap++;
            }
        }
        count += gap;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << numberOfSubarrays2(a, k) << '\n';
    }
    return 0;
}