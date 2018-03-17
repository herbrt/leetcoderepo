Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

给定一棵二叉树和一个整数。判断是否有一条从根到叶节点的路径，使该路径上所有节点的值之和等于给定的整数。

思路是层次遍历，更新每个子节点的值为（子节点值=子节点值+父节点值）。当遇到叶节点时，比较该叶节点的值是否等于给定整数，若相等输出true。若整棵树遍历完则输出false。
空树直接输出false，第一次提交的时候，我以为空树的值为0，因此失败了。
