class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 0

        _nums = sorted(nums)
        m1 = _nums[-1]
        m2 = _nums[-2]
        if m1 >= m2 * 2:
            return nums.index(m1)
        else:
            return -1
