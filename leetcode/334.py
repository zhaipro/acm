
from misc import LIS


class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        return len(LIS(nums)) >= 3
