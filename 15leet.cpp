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

vector <vector <int>> threeSum(vector <int> &vec) {
    int n = vec.size();
    vector <vector <int>> sol;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && vec[i] == vec[i - 1]) {
            continue;
        }
        int target = -1 * vec[i];
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = vec[left] + vec[right];
            if (sum > target) {
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                sol.push_back({vec[i], vec[left], vec[right]});
                while (left < right && vec[right] == vec[right - 1]) {
                    right--;
                }
                while (left < right && vec[left] == vec[left + 1]) {
                    left++;
                }
                left++;
                right--;
            }
        }
    }
    return sol;
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)  {
        int n;
        cin >> n;
        vector <int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        vector <vector <int>> sol = threeSum(vec);
    }
    return 0;
}