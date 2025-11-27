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

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << removeDuplicates(nums) << '\n';
    }
    return 0;
}