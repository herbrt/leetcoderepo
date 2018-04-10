You need to find the largest value in each row of a binary tree.

Example:
Input: 

          1
         / \
        3   2
       / \   \  
      5   3   9 

Output: [1, 3, 9]

找出二叉树每层的最大值。

我的方法是利用两个队列层次遍历，交替使用两个队列，这样就可以保证每个队列只处理一层，然后记录每层的最大值就行了。
这是一种我认为非常直观的方法，速度是O(n)，但空间也是O(n)。这是一种BFS的解法。

网友的解答中，有一种采用先序遍历思想的解答，即先序的访问二叉树，给出与层数相等个数的当前最大值，再递归的更新最大值。空间复杂度是O(logn)。这是一种DFS的解法。

摘录如下
// OJ: https://leetcode.com/problems/find-largest-value-in-each-tree-row
// Auther: github.com/lzl124631x
// Time: O(N)
// Space: O(logN)
class Solution {
private:
  vector<int> ans;
  void preorder(TreeNode* root, int height) {
    if (!root) return;
    if (ans.size() < height) ans.push_back(root->val);
    else ans[height - 1] = max(ans[height - 1], root->val);
    preorder(root->left, height + 1);
    preorder(root->right, height + 1);
  }
public:
  vector<int> largestValues(TreeNode* root) {
    preorder(root, 1);
    return ans;
  }
};
