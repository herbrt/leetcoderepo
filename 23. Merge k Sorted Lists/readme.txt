Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

Example:

Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6

合并k个有序链表为一个

思路：
1.反复遍历k个链表的第一个元素，取出最小的，加入到结果中，直到k个链表均为空，操作与mergesort相同。
2.将所有元素加入一个vector中，排序，然后再构建新的链表。
3.利用优先队列优化(1.)。
4.分治，将链表两两组合。
https://leetcode.com/problems/merge-k-sorted-lists/solution/
