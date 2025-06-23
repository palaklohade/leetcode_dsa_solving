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
    int sumNumbers(TreeNode* root , int cur = 0) {
        if(!root)return 0;
        cur = 10* cur + root->val;
        if(!root->left && !root->right) return cur;
        return sumNumbers(root->left, cur) + sumNumbers(root->right, cur);
    }
};