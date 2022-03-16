class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        r = nums[0]
        c = 0
        for x in nums:
            c += x
            if c > r:
                r = c
            if c < 0:
                c = 0
        return r
