/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3, *p, *q;
    int cout = 0;
    l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    p = (struct ListNode*)malloc(sizeof(struct ListNode));
    l3 = p;
    if(l1->val==0&&l1->next==NULL) return(l3 = l2);
    if(l2->val==0&&l2->next==NULL) return(l3 = l1);
    while(l1!=NULL||l2!=NULL||cout!=NULL)
    {
        q = (struct ListNode*)malloc(sizeof(struct ListNode));
        if(l1==NULL&&l2==NULL)
        {
            q->val = cout;
            cout = 0;
        }
            
        else if(l1==NULL)
        {
            q->val = (l2->val+cout)%10;
            cout = (l2->val+cout)>9?1:0;
            l2 = l2->next;
        }
            
        else if(l2==NULL)
        {
            q->val = (l1->val+cout)%10;
            cout = (l1->val+cout)>9?1:0;
            l1 = l1->next;
        }
            
        else
        {
            q->val = (l1->val+l2->val+cout)%10;
            cout = (l1->val+l2->val+cout)>9?1:0;
            l1 = l1->next;
            l2 = l2->next;
        }
        q->next = NULL;
        p->next = q;
        p = p->next;
    }
    l3 = l3->next;
    return l3;
}
