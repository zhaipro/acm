
from misc import LIS


class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        return len(LIS(nums))
