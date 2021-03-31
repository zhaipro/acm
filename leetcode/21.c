/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *r = 0, *c = 0;
    while(l1 && l2)
    {
        if(l1->val < l2->val) {
            if(r == 0) {
                r = l1;
            } else {
                c->next = l1;
            }
            c = l1;
            l1 = l1->next;
        } else {
            if(r == 0) {
                r = l2;
            } else {
                c->next = l2;
            }
            c = l2;
            l2 = l2->next;
        }
    }
    while(l1)
    {
        if(c) {
            c->next = l1;
        } else {
            r = l1;
        }
        c = l1;
        l1 = l1->next;
    }
    while(l2)
    {
        if(c) {
            c->next = l2;
        } else {
            r = l2;
        }
        c = l2;
        l2 = l2->next;
    }
    return r;
}
