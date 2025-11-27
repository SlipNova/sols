#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

class Helper {
    int x;
    ll result;
    set<pair<int,int>> large, small;
    unordered_map<int,int> freq;

    void internalInsert(const pair<int,int> &p) {
        if (large.size() < x || p > *large.begin()) {
            result += static_cast<ll> (p.first) * p.second;
            large.insert(p);
            if (large.size() > x) {
                result -= static_cast<ll> (large.begin() -> first) * large.begin() -> second;
                pair<int,int> transfer = *large.begin();
                large.erase(transfer);
                small.insert(transfer);
            }
        }
        else {
            small.insert(p);
        }
    }

    void internalRemove(const pair<int,int> &p) {
        if (p >= *large.begin()) {
            result -= static_cast<ll> (p.first) * (p.second);
            large.erase(p);
            if (!small.empty()) {
                auto ins = *small.rbegin();
                result += static_cast<ll> (ins.first) * ins.second;
                large.insert(ins);
                small.erase(ins);
            }
        }
        else {
            small.erase(p);
        }
    }
public:
    Helper(int x) {
        this -> x = x;
        result = 0;
    }
    
    void insert(int num) {
        if (freq[num]) {
            internalRemove({freq[num], num});
        }
        freq[num]++;
        internalInsert({freq[num], num});
    }

    void remove(int num) {
        internalRemove({freq[num], num});
        freq[num]--;
        if (freq[num]) {
            internalInsert({freq[num], num});
        }
    }

    ll getResult() {
        return this -> result;
    }
};

vector<ll> findXSum(vector<int> &nums, int k, int x) {
    int n = nums.size();
    vector<ll> ans;
    Helper helper(x);
    for (int i = 0; i < n; i++) {
        helper.insert(nums[i]);
        if (i >= k) {
            helper.remove(nums[i - k]);
        }
        if (i >= k - 1) {
            ans.push_back(helper.getResult());
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> nums(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<ll> ans = findXSum(nums, k, x);
        for (int i = 0; i < ans.size(); i++) {
            if (i == ans.size() - 1) {
                cout << ans[i] << '\n';
                break;
            }
            cout << ans[i] << ' ';
        
        }
    }
    return 0;
}