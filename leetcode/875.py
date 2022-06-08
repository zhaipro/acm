class Solution:

    def isok(self, piles, h, r):
        return h >= sum((p + r - 1) // r for p in piles)

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        a = 0
        b = max(piles)
        while b - a > 1:
            c = (a + b) // 2
            if self.isok(piles, h, c):
                b = c
            else:
                a = c
        return b
