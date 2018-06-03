Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

Example:

Given this linked list: 1->2->3->4->5

For k = 2, you should return: 2->1->4->3->5

For k = 3, you should return: 3->2->1->4->5

Note:

Only constant extra memory is allowed.
You may not alter the values in the list's nodes, only nodes itself may be changed.

将链表按k个k个元素分组进行反转，若不足k个元素则不反转

思路分为两部分：
1.将k个元素反转
2.连接各个分组

1.采用常见的反转链表的方法，利用3个指针，[pre,t,next]分别记录当前指针和他的前驱后继，使原先的pre->t->next，变为pre<-t-<next。
2.注意当出现2k个元素，例如1->2->3->4->5->6，k=3时，需要将1->4变为1->6即可。
