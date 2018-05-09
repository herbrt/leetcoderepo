Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

Follow up:

Could you do this in one pass?

移除链表中倒数第n个节点。

我的思路是先first记录head的前一个节点，再记录一个tmp=head的当前节点，然后向后看n+1个节点，若第n+1个节点为空，则令tmp->next=tmp->next->next，并返回first->next

这样做的缺点是，每移动一次，都要向后访问n个节点。

改进的方式为，先将tmp向后移动n+1个节点，记为p，然后tmp和p一起移动，当p为空，则令tmp->next=tmp->next->next
