/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* r = 0, *c = 0, *p = 0;
    while(l1 && l2) {
        if (l1->val < l2->val) {
            c = l1;
            l1 = l1->next;
        } else {
            c = l2;
            l2 = l2->next;
        }
        if (r == 0) {
            r = c;
            p = c;
        } else {
            p->next = c;
        }
        p = c;
    }

    if (l2) {
        l1 = l2;
    }

    if(l1) {
        if (r == 0) {
            r = l1;
        } else {
            p->next = l1;
        }
    }
    return r;
}
