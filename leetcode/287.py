class Solution:
    def findDuplicate(self, nums):
        n = len(nums)
        x = nums[0]
        y = nums[nums[0]]
        t = x
        while x != y:
            x = nums[x]
            y = nums[nums[y]]
        x = 0
        while x != y:
            x = nums[x]
            y = nums[y]
        return x
