/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val){
    struct ListNode* p = 0, *c = head;
    while(c) {
        if (c->val == val) {
            if (p) {
                p->next = c->next;
            } else {
                head = c->next;
            }
            break;
        }
        p = c;
        c = c->next;
    }
    return head;
}
