Given a binary tree
    struct TreeLinkNode {
      TreeLinkNode *left;
      TreeLinkNode *right;
      TreeLinkNode *next;
    }
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

Initially, all next pointers are set to NULL.

Note:
You may only use constant extra space.
You may assume that it is a perfect binary tree (ie, all leaves are at the same level, and every parent has two children).
For example,
Given the following perfect binary tree,
         1
       /  \
      2    3
     / \  / \
    4  5  6  7
After calling your function, the tree should look like:
         1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \  / \
    4->5->6->7 -> NULL
    
给出一棵二叉树，将每一层的孩子利用next指针向右连接起来，最右端的子节点的next指针指向NULL，如示意图所示。

由于题目中说明二叉树为完美二叉树。因此，不用考虑任何特殊情况。
利用队列实现层次遍历。对每个具有左孩子的节点，首先将节点左孩子指向右孩子，然后判断若该节点next不为空，则该节点的右孩子指向该节点next节点的左孩子。
