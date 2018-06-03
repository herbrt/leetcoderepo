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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* p = head;
        ListNode* first = NULL;
        ListNode* r = head;
        ListNode* t = head;
        ListNode* pre = NULL;
        ListNode* next = NULL;
        while(r){
            p = r;
            t = r;
            for(int i = 1; i < k; i++){
                if(!p->next)
                    return head;
                p = p->next;
            } 
            r = p->next;
            pre = r;
            while(t!=r){
                next = t->next;
                t->next = pre;
                pre = t;
                t = next;
            }         
            if(!first){
                first = head;
                head = p;
            }
            else{
                t = first->next;
                first->next = p;
                first = t;
            }
            
        }
        return head;
    }
};
