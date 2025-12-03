/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool help(TreeNode* root, TreeNode* subroot) {
        if (!root && !subroot)
            return true;
        if (!root || !subroot)
            return false;
        if (root->val != subroot->val)
            return false;

        return help(root->left, subroot->left) &&
               help(root->right, subroot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* f = q.front();
            q.pop();
            if (help(f, subRoot))
                return true;
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
        return false;
    }
};