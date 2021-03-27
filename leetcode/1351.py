class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        count = 0
        for line in grid:
            for c in line:
                if c < 0:
                    count += 1
        return count
