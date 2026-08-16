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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(new TreeNode(1001));
        vector<int> mid;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->val == 1001) {
                // cout<<endl;
                res.push_back(mid);
                mid.clear();
                if(q.empty()) {
                    break;
                }
                else {
                    q.push(new TreeNode(1001));
                }
            } else {
                // cout<<curr->val;
                mid.push_back(curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
        return res;
    }
};
