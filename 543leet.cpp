
class Solution {
public:
    int maxDiameter = 0;

    int depth(TreeNode* root) {
        if (!root)
            return 0;
        int left = depth(root->left);
        int right = depth(root->right);
        maxDiameter = max(maxDiameter, left + right);
        return 1 + max(left, right);                  
    }

    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return maxDiameter;
    }
};