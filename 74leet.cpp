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

int S(vector<int>& a, int target) {
    int left = 0;
    int right = a.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == target) {
            return mid;
        } else if (a[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    if (left == -1) {
        left = 0;
    } else if (left == a.size()) {
        left = a.size() - 1;
    }
    if (right == a.size()) {
        right = a.size() - 1;
    } else if (right == -1) {
        right = 0;
    }
    if (a[left] > target) {
        return right;
    }
    return left;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int R = matrix.size();
    int C = matrix[0].size();
    vector<int> ROW;
    for (int row = 0; row < R; row++) {
        ROW.push_back(matrix[row][0]);
    }
    int k = S(ROW, target);
    if (matrix[k][0] == target) {
        return true;
    }
    int id = k;
    int l = S(matrix[id], target);
    if (matrix[id][l] == target) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int m, n, target;
        cin >> m >> n >> target;
        vector <vector <int>> matrix(m, vector <int> (n, 0));
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                cin >> matrix[row][col];
            }
        }
        cout << (searchMatrix(matrix, target) ? "True" : "False") << '\n'; 
    }
    return 0;
}