class Solution:
    def magicTower(self, nums: List[int]) -> int:
        if sum(nums) < 0:
            return -1
        r = 0
        c = 1
        t = []
        for x in nums:
            if x < 0:
                t.append(x)
            c += x
            if c <= 0:
                r += 1
                c -= min(t)
                t.remove(min(t))
        return r
