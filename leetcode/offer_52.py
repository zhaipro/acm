# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        n = 0
        m = 0
        p = headA
        while p:
            n += 1
            p = p.next
        p = headB
        while p:
            m += 1
            p = p.next
        for _ in range(max(0, n - m)):
            headA = headA.next
        for _ in range(max(0, m - n)):
            headB = headB.next
        for _ in range(min(n, m)): 
            if headA == headB:
                return headA
            headA = headA.next
            headB = headB.next
