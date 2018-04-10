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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> r1,r2;
        vector<int> res;
        if(!root) return res;
        int tmp;
        int symbol;
        TreeNode* t;
        r1.push(root);
        while(!r1.empty()){
                tmp = INT_MIN;
                symbol = 0;
            while(!r1.empty()){
                t = r1.front();
                r1.pop();
                tmp = t->val>tmp?t->val:tmp;
                if(t->left) r2.push(t->left);
                if(t->right) r2.push(t->right);       
            }
            res.push_back(tmp);
            tmp = INT_MIN;
            while(!r2.empty()){
                symbol = 1;
                t = r2.front();
                r2.pop();
                tmp = t->val>tmp?t->val:tmp;
                if(t->left) r1.push(t->left);
                if(t->right) r1.push(t->right);
                
            }
            if(symbol == 1) res.push_back(tmp);
        }
        return res;
    }
};
