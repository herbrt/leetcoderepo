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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* cur = root;
        while(cur){//while(cur||!s.empty()){ 为什么要判定s是否为空？ 
            s.push(cur);
            cur = cur->left;
            while(!cur&&!s.empty()){
                cur = s.top();
                res.push_back(cur->val);
                s.pop();
                cur = cur->right;
            }
        }
        return res;
    }
};
