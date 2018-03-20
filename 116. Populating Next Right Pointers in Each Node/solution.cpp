/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;
        queue<TreeLinkNode*> q;
        q.push(root);
        TreeLinkNode *t = root;
        while(t->left){
            t->left->next = t->right;
            q.push(t->left);
            q.push(t->right);
            if(t->next)
                t->right->next = t->next->left;
            t = q.front();
            q.pop();
        }
        return;
    }
};
