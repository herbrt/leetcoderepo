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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* t;
        if(!root) return 0;
        root->val = 1;
        q.push(root);
        while(!q.empty()){
            t = q.front();
            q.pop();
            if(!t->left&&!t->right)
                return t->val;
            if(t->left){
                t->left->val = t->val+1;
                q.push(t->left);
            }
            if(t->right){
                t->right->val = t->val+1;
                q.push(t->right);
            }
        }  
    }
};
