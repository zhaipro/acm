class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:
        r = 0
        line = grid[0]
        for row in grid:
            r += sum(x > 0 for x in row)
            r += max(row)
            line = [max(x, y) for x, y in zip(line, row)]
        return r + sum(line)
