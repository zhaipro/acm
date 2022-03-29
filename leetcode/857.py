import bisect


class Solution:
    def mincostToHireWorkers(self, quality, wage, k):
        # 方格化
        hws = [(w / q, q) for w, q in zip(wage, quality)]
        # 从低到高
        hws.sort()
        # 当前最窄的方格
        cws = [hws[i][1] for i in range(k)]
        cws.sort()
        r = sum(cws) * hws[k - 1][0]
        for h, w in hws[k:]:
            i = bisect.bisect_left(cws, w)
            if i < k:
                cws.insert(i, w)
                cws.pop()
            r = min(sum(cws) * h, r)
        return round(r, 5)


quality = [10,20,5]
wage = [70,50,30]
k = 2

quality = [3,1,10,10,1]
wage = [4,8,2,2,7]
k = 3

quality = [32,43,66,9,94,57,25,44,99,19]
wage = [187,366,117,363,121,494,348,382,385,262]
k = 4
r = Solution().mincostToHireWorkers(quality, wage, k)
print(r)
