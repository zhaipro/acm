class Solution:
    def minOperations(self, nums, x):
        x -= sum(nums)
        if x > 0:
            return -1
        # [0, a), [b, n)
        n = len(nums)
        a = n
        b = n
        r = n + 1
        while a >= 0:
            if x == 0:
                r = min(a + n - b, r)
            if x > 0:
                b -= 1
                x -= nums[b]
            else:
                a -= 1
                x += nums[a]
        return r if r <= n else -1

nums = [1,1,4,2,3]
x = 5
nums = [5,6,7,8,9]
x = 4
nums = [3,2,20,1,1,3]
x = 10
nums = [1,1,4,2,3]
x = 5
r = Solution().minOperations(nums, x)
print(r)
