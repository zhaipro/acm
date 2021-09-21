class Solution:
    def xxx(self, grid, i, j):
        m, n = len(grid), len(grid[0])
        if i < 0 or i >= m or j < 0 or j >= n or grid[i][j] == '0':
            return
        grid[i][j] = '0'
        self.xxx(grid, i, j - 1)
        self.xxx(grid, i, j + 1)
        self.xxx(grid, i - 1, j)
        self.xxx(grid, i + 1, j)

    def numIslands(self, grid: List[List[str]]) -> int:
        r = 0
        m, n = len(grid), len(grid[0])
        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1':
                    r += 1
                    self.xxx(grid, i, j)
        return r
