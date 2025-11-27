#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

bool mycomp(const pair<int,int> &a, const pair<int, int> &b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }
    else {
        return a.second > b.second;
    }
}

int findXsum(vector<int> nums, int x) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<pair<int, int>> freq;
    for (int i = 0; i < n; i++) {
        pair<int, int> p;
        p.first = nums[i];
        p.second = 1;
        if (i + 1 < n) {
            while (nums[i] == nums[i + 1]){
                i++;
                p.second++;
                if (i == n - 1) break;
            }
        }
        freq.push_back(p);
    }
    sort(freq.begin(), freq.end(), mycomp);
    /*
    for (auto it: freq) {
        cout << it.first << ' ' << it.second << ' ' << endl;
    }
    */
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += (freq[i].first * freq[i].second);
    }
    return sum;
}

vector<int> findXSum(vector<int> nums, int k, int x) {
    int n = nums.size();
    vector<int> answers(n - k + 1, 0);
    for (int i = 0; i < n - k + 1; i++) {
        vector<int> curr;
        for (int j = i; j < i + k; j++) {
            curr.push_back(nums[j]);
        }
        answers[i] = findXsum(curr, x);
    }
    return answers;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int k, x;
        cin >> k >> x;
        vector<int> nums(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<int> sol = findXSum(nums, k, x);
        for (int i = 0; i < sol.size(); i++) {
            if (i < sol.size() - 1) {
                cout << sol[i] << ' ';
            }
            else {
                cout << sol[i] << '\n';
            }
        }
    }
    return 0;
}