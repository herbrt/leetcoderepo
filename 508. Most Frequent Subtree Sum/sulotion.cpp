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
    int calculateSum(TreeNode* t, vector<pair<int,int> >& v, int &ms){
        if(!t) return 0;
        int sum = t->val;
        sum += calculateSum(t->left, v, ms);
        sum += calculateSum(t->right, v, ms);
        for(int i = 0; i<v.size(); i++){
            if(v[i].first == sum){
                v[i].second++;
                if(v[i].second > ms)
                    ms = v[i].second;
                return sum;
            }
        }
        pair <int,int> p;//sum,num
        p.first = sum;
        p.second = 1;
        if(ms<1) ms = 1;
        v.push_back(p);
        return sum;
        
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        int MaxSum = 0;
        vector<int> res;
        vector<pair<int,int> > v;
        
        calculateSum(root, v, MaxSum);
        
        for(int i = 0; i<v.size(); i++){
            if(v[i].second == MaxSum)
                res.push_back(v[i].first);
        }
        cout<<MaxSum;
        return res;
    }
};
