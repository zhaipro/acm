class Solution:
    def surfaceArea(self, grid: List[List[int]]) -> int:
        n = len(grid)
        r = 0
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 0:
                    continue
                r += 2
                g = grid[i][j]
                if i == 0:
                    r += g
                if i == n - 1:
                    r += g
                if j == 0:
                    r += g
                if j == n - 1:
                    r += g
                if i > 0:
                    r += max(g - grid[i - 1][j], 0)
                if j > 0:
                    r += max(g - grid[i][j - 1], 0)
                if i < n - 1:
                    r += max(g - grid[i + 1][j], 0)
                if j < n - 1:
                    r += max(g - grid[i][j + 1], 0)
        return r
