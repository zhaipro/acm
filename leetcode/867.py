class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        w = len(matrix[0])
        r = []
        for _ in range(w):
            r.append([])
        for line in matrix:
            for j, c in enumerate(line):
                r[j].append(c)
        return r
