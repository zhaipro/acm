import bisect


class Solution:
    def minDays(self, bloomDay, m, k):
        n = len(bloomDay)
        if n < m * k:
            return -1
        indexes = sorted(list(range(n)), key=lambda i:bloomDay[i])
        t = [-1, n]
        s = n // k
        while True:
            i = indexes.pop()
            r = bloomDay[i]
            j = bisect.bisect_left(t, i)
            t.insert(j, i)
            a = t[j - 1]
            b = t[j]
            c = t[j + 1]
            s -= (c - a - 1) // k - (b - a - 1) // k - (c - b - 1) // k
            if s < m:
                break
        return r

bloomDay = [1,10,3,10,2]
m = 3
k = 1
r = Solution().minDays(bloomDay, m, k)
print(r)
