class Solution:
    def xxx(self, grid, i, j):
        m, n = len(grid), len(grid[0])
        if i < 0 or i >= m or j < 0 or j >= n or grid[i][j] == 0:
            return 0
        grid[i][j] = 0
        return 1 + self.xxx(grid, i, j - 1) + self.xxx(grid, i, j + 1) + \
            self.xxx(grid, i - 1, j) + self.xxx(grid, i + 1, j)

    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        r = 0
        m, n = len(grid), len(grid[0])
        for i in range(m):
            for j in range(n):
                r = max(self.xxx(grid, i, j), r)
        return r
