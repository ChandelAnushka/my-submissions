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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;
        while(!q.empty()) {
            int i, n = q.size();
            vector<int> temp;
            for(i=0;i<n;i++) {

                TreeNode* curr = q.front();
                q.pop();

                if(curr->left != NULL) {
                    q.push(curr->left);
                }
                if(curr->right !=NULL) {
                    q.push(curr->right);
                }
                temp.push_back(curr->val);

            }
            if(!flag) {
                std::reverse(temp.begin(), temp.end());
            }
            res.push_back(temp);
            flag = !flag;
        }
        return res;
    }
};