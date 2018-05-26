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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p, *q, *r;
        p = head;
        if(!head) return head;
        if(head->next){
            q = head->next;
            if(head->next->next){
                r = head->next->next;             
                p->next = r;
                q->next = p;
                head = q;
            }
            else{
                q->next = p;
                p->next = NULL;
                return q;
            }
        }
        else
            return head;
        
        while(r->next){
            q = r->next;
            p->next = q;
            if(r->next->next){
                p = r;               
                r = p->next->next;
                p->next = r;
                q->next = p;
            }
            else{
                q->next = r;
                r->next = NULL;
            }
        }
        return head;
    }
};
