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
    // int countNodes(TreeNode* root) {
    //     if(root == nullptr)return 0;
    //     return 1 + countNodes(root->left) + countNodes(root->right); 
    int countNodes(TreeNode* root){
        if(root == nullptr) return 0;
        int left = getheight(root);
        int right = getheightright(root);
        if(left == right){
            return (1 << left) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int getheight(TreeNode* node){
        int h = 0;
        while(node){
            h++;
            node= node->left;
        }
        return h;
    }
    int getheightright(TreeNode* node){
        int h = 0;
        while(node){
            h++;
            node= node->right;
        }
        return h;
    }
    //this is the optimised soltion to be solved in o(log n ) time.
};