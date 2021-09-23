class Solution:
    def smallestRangeI(self, nums: List[int], k: int) -> int:
        a = min(nums)
        b = max(nums)
        return max(b - a - 2 * k, 0)
