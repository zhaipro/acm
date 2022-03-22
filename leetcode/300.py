class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        r = [nums[0]]
        for num in nums:
            if num > r[-1]:
                r.append(num)
            else:
                index = bisect.bisect_left(r, num)
                r[index] = num
        return len(r)
