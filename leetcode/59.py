class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        r = [[0] * n for _ in range(n)]
        m = n
        s1, s2 = 1, 0
        x, y = -1, 0
        i = 0
        while m * n:
            for _ in range(n):
                x += s1
                y += s2
                i += 1
                r[y][x] = i
            s1, s2 = -s2, s1
            m -= 1
            m, n = n, m
        return r
