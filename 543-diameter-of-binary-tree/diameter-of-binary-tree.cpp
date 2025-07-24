/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int maxdia = 0;

    int height(TreeNode* node) {
        if (!node) return 0;
        int leftheight = height(node->left);
        int rightheight = height(node->right);
        maxdia = max(maxdia, leftheight + rightheight);
        return 1 + max(leftheight, rightheight); 
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root); 
        return maxdia;
    }
};