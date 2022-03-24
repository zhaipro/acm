class Solution:
    def _stoneGameII(self, piles, i, m):
        if self.t[i * 64 + m] > 0:
            return self.t[i * 64 + m]
        n = len(piles)
        s = sum(piles[i:])
        if 2 * m >= n - i:
            return s
        r = 0
        for j in range(1, 2 * m + 1):
            r = max(r, s - self._stoneGameII(piles, i + j, max(j, m)))
        self.t[i * 64 + m] = r
        return r

    def stoneGameII(self, piles):
        self.t = [0] * 64 * 100
        return self._stoneGameII(piles, 0, 1)


piles = [2,7,9,4,4]
r = Solution().stoneGameII(piles)
print(r)

