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
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return (max(lh, rh) + 1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        if(root==NULL) {
            return res;
        }
        int diam1 = diameterOfBinaryTree(root->left);
        int diam2 = diameterOfBinaryTree(root->right);
        int diam3 = maxDepth(root->left) + maxDepth(root->right);
        res = max(max(diam1, diam2), diam3);
        return res;
    }
};
