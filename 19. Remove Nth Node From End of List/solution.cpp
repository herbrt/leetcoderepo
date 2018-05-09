/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = new ListNode(-1);
        first->next = head;
        ListNode* p = first;
        ListNode* tmp = p;
        
        for(int i = 0; i<n+1; i++)
            p = p->next;
        while(1){
            if(!p){
                tmp->next = tmp->next->next;
                return first->next;
            }
            else{
                tmp = tmp->next;
                p = p->next;
            }
        }
        return first->next;
    }
};
