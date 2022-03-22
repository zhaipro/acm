
import bisect


class Solution:
    def findLongestChain(self, pairs):
        r = 0
        pairs.sort(key=lambda p:(p[1], -p[0]))
        t = pairs[0][0] - 1
        for x1, x2 in pairs:
            if x1 > t:
                r += 1
                t = x2
        return r
