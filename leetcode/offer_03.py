class Solution:
    def findRepeatNumber(self, nums: List[int]) -> int:
        for i, c in enumerate(nums):
            if c in nums[:i]:
                return c
