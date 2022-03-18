class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(n):
            j = nums[i] - 1
            while j >= 0 and j < n and nums[j] - 1 != j:
                k = nums[j] - 1
                nums[j] = j + 1
                j = k
        for i in range(n):
            if nums[i] - 1 != i:
                return i + 1
        return n + 1
