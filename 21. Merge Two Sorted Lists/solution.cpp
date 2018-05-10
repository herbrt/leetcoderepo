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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(-1);
        ListNode* p = l3;
        while(l1&&l2){
            cout<<l3->val<<" ";
            if(l1->val>l2->val){
                l3->next = l2;
                l3 = l2;
                l2 = l2->next;
            }
            else{
                l3->next = l1;
                l3 = l1;
                l1 = l1->next;
            }
        }
            
        if(l1)
            l3->next = l1;
        else if(l2)
            l3->next = l2;
        return p->next;
    }
};
