class Solution:
    def maxmiumScore(self, cards: List[int], cnt: int) -> int:
        cards.sort()
        r = sum(cards[-cnt:])
        if r % 2 == 0:
            return r
        r0 = 0
        r1 = 0
        try:
            x0 = next(x for x in cards[-cnt:] if x % 2 == 0)
            y1 = next(x for x in cards[-cnt - 1::-1] if x % 2)
            r0 = r - x0 + y1
        except:
            pass
        try:
            x1 = next(x for x in cards[-cnt:] if x % 2)
            y0 = next(x for x in cards[-cnt - 1::-1] if x % 2 == 0)
            r1 = r - x1 + y0
        except:
            pass
        return max(r0, r1)
