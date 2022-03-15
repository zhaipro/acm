class Solution:

    def _longestDiverseString(self, a, b, c, ca, cb, cc):
        r = ''
        while a:
            if c > b:
                b, c = c, b
                cb, cc = cc, cb
            if a >= b + 2:
                a -= 2
                r = r + ca * 2
            else:
                a -= 1
                r = r + ca
            a, b = b, a
            ca, cb = cb, ca
        return r

    def longestDiverseString(self, a: int, b: int, c: int) -> str:
        a = min((b + c + 1) * 2, a)
        b = min((a + c + 1) * 2, b)
        c = min((b + a + 1) * 2, c)

        if a >= b and a >= c:
           return self._longestDiverseString(a, b, c, 'a', 'b', 'c')
        elif b >= a and b >= c:
            return self._longestDiverseString(b, a, c, 'b', 'a', 'c')
        else:
            return self._longestDiverseString(c, b, a, 'c', 'b', 'a')
        return r
