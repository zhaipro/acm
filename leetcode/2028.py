class Solution:
    def missingRolls(self, rolls, mean, n):
        m = len(rolls)
        xn = mean * (m + n) - sum(rolls)
        if xn < n or xn > 6 * n:
            return []
        r = []
        for i in range(n):
            t = xn // (n - i)
            r.append(t)
            xn -= t
        return r


rolls = [3,2,4,3]
mean = 4
n = 2
r = Solution().missingRolls(rolls, mean, n)
print(r)
