Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

求二叉树根节点到最近叶节点的路径长度。

想到利用队列实现层次遍历，找到第一个叶节点。
遇到的问题是如何记录到第一个叶节点的路径长度。

一开始想到的办法是模拟整棵二叉树，每个节点编号为i，路径长度为log2(i)+1=log10(i)/log10(2)+1。但实现过程中发现这是很困难的，以为一旦空节点增多，就难以记录iz值的改变。
后来发现题目提供的数据结构中有一个属性是val，那么将子节点的val记录为父节点val+1，最后再返回第一个叶节点的val就行了。
