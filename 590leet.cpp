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

void post(Node* root, vector <int> &a) {
    if (root == NULL) {
        return;
    }
    for (int i = 0; i < (root->children).size(); i++) {
        post((root -> children)[i], a);
    }
    a.push_back(root->val);
}

vector<int> postorder(Node* root) {
    vector <int> a;
    post(root, a);
    return a;
}