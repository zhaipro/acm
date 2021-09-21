class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        r = []
        m, n = len(matrix), len(matrix[0])
        s1, s2 = 1, 0
        x, y = -1, 0
        while m * n:
            for _ in range(n):
                x += s1
                y += s2
                r.append(matrix[y][x])
            s1, s2 = -s2, s1
            m -= 1
            m, n = n, m
        return r
