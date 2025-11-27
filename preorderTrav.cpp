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

class Node {
    int val;
    Node* left;
    Node* right;

public:
    Node(int data) : val(data), left(nullptr), right(nullptr) {}

    Node* insert(Node* root, int data) { 
        if (root == nullptr) {
            return new Node(data);
        }
        if (data <= root->val) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }
        return root;
    }

    void postOrder(Node *root) {
        if (root == NULL) {
            return;
        }
        postOrder(root -> left);
        postOrder(root -> right);
        cout << root -> val << ' ';
    }

    void inOrder(Node *root) {
        if (root == NULL) {
            return;
        }
        postOrder(root -> left);
        postOrder(root -> right);
        cout << root -> val << ' ';
    }

    void preOrder(Node* root) {
        if (root == NULL) {
            return;
        } 
        cout << root -> val;
        preOrder(root -> left);
        preOrder(root -> right);
    }

    int getVal() const {
        return val;
    }

    Node* getLeft() const {
        return left;
    }

    Node* getRight() const {
        return right;
    }
};
