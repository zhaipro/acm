
import bisect


class Solution:
    def maxWidthRamp(self, nums):
        t1 = [-50001]
        t2 = [-1]
        r = 0
        for i, num in enumerate(nums):
            if num >= -t1[-1]:
                j = bisect.bisect_left(t1, -num)
                j = t2[j]
                r = max(i - j, r)
            else:
                t1.append(-num)
                t2.append(i)
        return r

nums = [3,4,1,2]
r = Solution().maxWidthRamp(nums)
print(r)
