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

int longestConsecutive1(vector <int>& a) {
    int n = a.size();
    priority_queue <int> P;
    unordered_set <int> S;
    int ans, mx;
    ans = mx = 0;
    for (int it: a) {
        S.insert(it);
    }
    for (int it: S) {
        P.push(it);
    }
    vector <int> t;
    int i = 0;
    while (!P.empty()) {
        int temp = P.top();
        t.push_back(temp);
        P.pop();
    }
    for (int i = 0; i < t.size() - 1; i++) {
        if (t[i] == t[i + 1] + 1) {
            mx++;
            ans = max(ans, mx);
        }
        else {
            mx = 0;
        }
    }
    return ans + 1;
}

  int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int c=0,maX=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]) continue;
            else if(nums[i+1]-nums[i]==1){
            c++;
            maX=max(c,maX);
            }
            else c=0;
        }
        return maX+1;
    }

int longestConsecutive(vector <int>& a) {
    int n = a.size();
    if (n == 0) return 0;
    sort(a.begin(), a.end());
    int mx, ans;
    ans = mx = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) continue;
        if (a[i + 1] - a[i] == 1) {
            mx++;
            ans = max(mx, ans);
        }
        else {
            mx = 0;
        }
    }
    return ans + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << longestConsecutive(a) << '\n';
    }
    return 0;
}