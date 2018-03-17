/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        queue<TreeNode*> q;
        TreeNode* t;
        if(!root) return false;
        q.push(root);
        while(!q.empty()){
            t = q.front();
            q.pop();
            if(!t->left&&!t->right){
                if(t->val==sum) return true;
            }
            if(t->left){
                t->left->val += t->val;
                q.push(t->left);
            } 
            if(t->right){
                t->right->val += t->val;
                q.push(t->right);
            } 
        }
        return false;
    }
};
