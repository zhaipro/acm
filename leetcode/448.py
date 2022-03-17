class Solution:
    def findDisappearedNumbers(self, nums):
        n = len(nums)
        for i in range(n):
            j = nums[i] - 1
            while nums[j] != j + 1:
                k = nums[j] - 1
                nums[j] = j + 1
                j = k
        r = []
        for i in range(n):
            if nums[i] != i + 1:
                r.append(i + 1)
        return r
