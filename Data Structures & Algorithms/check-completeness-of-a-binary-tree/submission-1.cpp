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
    bool isCompleteTree(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool seenNull = false;
        while (!q.empty()) {
            int i, num = q.size();
            for (i = 0; i < num; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if(curr==NULL) {
                    seenNull = true;
                    continue;
                }
                if(seenNull) {
                    return false;
                }
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
    }
};