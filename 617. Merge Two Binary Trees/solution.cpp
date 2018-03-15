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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1 || !t2)  return t1?t1:t2;
        t1->val += t2->val;
        t1->left = mergeTrees(t1?t1->left:NULL,t2?t2->left:NULL);
        t1->right = mergeTrees(t1? t1->right:NULL,t2?t2->right:NULL);
        return t1;
    }
};

/*
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        stack<TreeNode*> s1,s2;
        TreeNode *p1, *p2;
        p1 = t1, p2 = t2;
        if(!p1) return p2;
        while(p1){
            if(p2){
                p1->val += p2->val;
                s1.push(p1);
                s2.push(p2);
                p1 = p1->left;
                p2 = p2->left;
                puts("1");
            }
            else{
                p1 = s1.top();
                p2 = s2.top();
                s1.pop();
                s2.pop();
                p1 = p1->right;
                p2 = p2->right;
                  puts("2");
            }
            while(!p1&&!s1.empty()){
                if(p2){
                    *p1 = *p2;
                    p1 = p1->right;
                    p2 = p2->right;
                      puts("3");
                }
                else{
                    p1 = s1.top();
                    p2 = s2.top();
                    s1.pop();
                    s2.pop();
                    p1 = p1->right;
                    p2 = p2->right;
                      puts("1");
                }  
            }
        }
        return t1;
    }
};
*/
