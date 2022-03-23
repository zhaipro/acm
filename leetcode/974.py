class Solution:
    def subarraysDivByK(self, nums, k):
        sums = {0:1}
        s = 0
        r = 0
        for num in nums:
            s = (s + num) % k
            r += sums.get(s, 0)
            sums[s] = sums.get(s, 0) + 1
        return r


nums = [4,5,0,-2,-3,1]
k = 5
r = Solution().subarraysDivByK(nums, k)
print(r)
