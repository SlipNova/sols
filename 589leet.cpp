#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


void pre(Node* root, vector <int> &a) {
    if (root == NULL) {
        return;
    }
    a.push_back(root->val);
    for (int i = 0; i < (root->children).size(); i++) {
        pre((root -> children)[i], a);
    }
}

vector<int> preorder(Node* root) {
    vector <int> a;
    pre (root, a);
    return a;
}