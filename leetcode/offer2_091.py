class Solution:

    def minCost(self, costs: List[List[int]]) -> int:
        pr = pg = pb = 0
        for r, g, b in costs:
            _r = min(pg + g, pb + b)
            _g = min(pr + r, pb + b)
            _b = min(pg + g, pr + r)
            pr, pg, pb = _r, _g, _b
        return min(pr, pg, pb)
