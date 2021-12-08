# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

def func(r, node):
    if not node:
        return
    func(r, node.left)
    r.append(node.val)
    func(r, node.right)

class Solution:
    def kthLargest(self, root: TreeNode, k: int) -> int:
        r = []
        func(r, root)
        return r[-k]
