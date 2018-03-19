Given the root of a tree, you are asked to find the most frequent subtree sum. The subtree sum of a node is defined as the sum of all the node values formed by the subtree rooted at that node (including the node itself). So what is the most frequent subtree sum value? If there is a tie, return all the values with the highest frequency in any order.

给定一棵二叉树，每个节点含有一个值，每棵子树的值为子树中所有节点的值的和。求出现最多的子树值的和。

Examples 1
Input:
  5
 /  \
2   -3
return [2, -3, 4], since all the values happen only once, return all of them in any order.
Examples 2
Input:
  5
 /  \
2   -5
return [2], since 2 happens twice, however -5 only occur once.
Note: You may assume the sum of values in any subtree is in the range of 32-bit signed integer.

采用递归的思想，对于一棵子树，和=左子树和+右子树和。
将所有的子树和保存，最后将每一个字叔和出现次数与出现最多的次数值比较，若相等，则是一个解。
