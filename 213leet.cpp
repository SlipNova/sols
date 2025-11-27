#include <iostream>

using namespace std;

int rob1(vector<int>& nums, int start, int end) {
    int f = 0, s = 0;
    for (int i = start; i <= end; i++) {
        int curr = max(s, f + nums[i]);
        f = s;
        s = curr;
    }
    return s;
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);
    return max(rob1(nums, 1, n - 1), rob1(nums, 0, n - 2));
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << rob(nums) << '\n';
    }
}
