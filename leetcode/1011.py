class Solution:
    def isok(self, weights, days, r):
        t = 0
        c = 1
        for w in weights:
            if w + t > r:
                t = 0
                c += 1
            t += w
        return c <= days

    def shipWithinDays(self, weights, days):
        a, b = max(weights) - 1, sum(weights)
        # r in (a, b]
        while a + 1 < b:
            c = (a + b) // 2
            if self.isok(weights, days, c):
                b = c
            else:
                a = c
        return b


weights = [1,2,3,4,5,6,7,8,9,10]
days = 5
r = Solution().shipWithinDays(weights, days)
print(r)
