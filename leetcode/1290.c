/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    int r = 0;
    while(head)
    {
        r <<= 1;
        r |= head->val;
        head = head->next;
    }
    return r;
}
