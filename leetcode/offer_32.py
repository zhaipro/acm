# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

def level_order(n, r, d):
    if n is None:
        return

    if len(r) <= d:
        r.append([])
    r[d].append(n.val)
    level_order(n.left, r, d + 1)
    level_order(n.right, r, d + 1)

class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        r = []
        level_order(root, r, 0)
        return r
