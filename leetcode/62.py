class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        r = 1
        for i in range(m, m + n - 1):
            r *= i
        for i in range(1, n):
            r //= i
        return r
