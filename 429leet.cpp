#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

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

vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> res;
    queue<Node*> q;
    Node* temp;
    int size;
    if (root == nullptr) {
        return res;
    }
    q.push(root);
    while (!q.empty()) {
        vector<int> level;
        size = q.size();
        for (int i = 0; i < size; i++) {
            temp = q.front();
            q.pop();
            for (int j = 0; j < temp->children.size(); j++) {
                q.push(temp->children[j]);
            }
            level.push_back(temp->val);
        }
        res.push_back(level);
    }
    return res;
}