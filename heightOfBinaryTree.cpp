
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <stdexcept>

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 7;

using namespace std;

template <typename T> 
class TreeNode {
public:
    T val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(T _val) : val(_val), left(nullptr), right(nullptr) {}
    TreeNode(T _val, TreeNode* _left, TreeNode* _right) : val(_val), left(_left), right(_right) {}
};
   
template <typename T>
TreeNode<T>* insert(TreeNode<T>* root, T data) {
    if (root == nullptr) {
        return new TreeNode<T>(data);
    }
    if (data <= root->val) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    TreeNode<int>* root = nullptr;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        root = insert(root, t);
    }
    if (root == nullptr) {
        cout << "Tree is empty";
        return 0;
    }
    cout << root->val;
    if (root->left != nullptr) {
        cout << ' ' << root->left->val;
    }

    return 0;
}

