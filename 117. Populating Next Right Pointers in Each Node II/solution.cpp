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
    void connectNext(TreeLinkNode* t, TreeLinkNode* ts){
        if(t->next->left)
            ts->next = t->next->left;
        else if(t->next->right)
            ts->next = t->next->right;
        else{
            if(t->next->next){
                t = t->next;
                connectNext(t,ts);
            }
        }
    }
    
    void connect(TreeLinkNode *root) {
        if(!root) return;
        queue<TreeLinkNode*> q;
        q.push(root);
        TreeLinkNode *t = root;
        while(t){
            if(t->left&&t->right){
                q.push(t->left);q.push(t->right);
                t->left->next = t->right;
                if(t->next)
                    connectNext(t, t->right);
            }
                
            else if(t->left){
                q.push(t->left);
                if(t->next)
                    connectNext(t, t->left);
            }
            else if(t->right){
                q.push(t->right);
                if(t->next)
                    connectNext(t, t->right);
            }
            if(!q.empty()){
                t = q.front();
                q.pop();
            }
            else{
                return;
            }
            
        }
        return;
    }
};
