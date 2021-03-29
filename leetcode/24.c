/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *r = 0, *t;
    while(head)
    {
        t = head->next;
        head->next = r;
        r = head;
        head = t;
    }
    return r;
}
