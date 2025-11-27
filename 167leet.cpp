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

typedef long long ll;
typedef long double ld;

using namespace std;
using namespace std::chrono;

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    vector<int> sol;
    while (left <= right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            sol.push_back(left + 1);
            sol.push_back(right + 1);
            break;
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }
    return sol;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, target;
        cin >> n >> target;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector <int> temp = twoSum(a, target);
        for (int i = 0; i < temp.size(); i++) {
            if (i > 0) {
                cout << ' ';
            }
            cout << temp[i];
        }
        cout << '\n';
    }
    return 0;
}
