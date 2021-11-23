/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int x = 0;
    int r = 0;
    struct ListNode *s = 0;
    struct ListNode *t1 = 0, *t2 = 0;
    while (l1 && l2) {
        t1 = malloc(sizeof(struct ListNode));
        x = l1->val + l2->val + r;
        t1->val = x % 10;
        r = x / 10;
        l1 = l1->next;
        l2 = l2->next;
        if (t2) {
            t2->next = t1;
        } else {
            s = t1;
        }
        t2 = t1;
    }
    if (l1 == 0) {
        l1 = l2;
    }
    while (l1) {
        t1 = malloc(sizeof(struct ListNode));
        x = l1->val + r;
        t1->val = x % 10;
        t2->next = t1;
        t2 = t1;
        r = x / 10;
        l1 = l1->next;
    }
    if (r) {
        t1 = malloc(sizeof(struct ListNode));
        t1->val = r;
        t2->next = t1;
    }
    t1->next = 0;
    return s;
}
