class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort(reverse=True)
        for r, x in enumerate(citations, 1):
            if x < r:
                r -= 1
                break
        return r
