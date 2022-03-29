import bisect


class Solution:
    def getSkyline(self, buildings):
        x = [0, 0x7fffffff]
        y = [0, 0]
        for left, right, height in buildings:
            j = bisect.bisect_left(x, right)
            if x[j] != right:
                x.insert(j, right)
                y.insert(j, y[j - 1])
            i = bisect.bisect_left(x, left)
            if x[i] != left:
                x.insert(i, left)
                y.insert(i, y[i - 1])
                j += 1
            for k in range(i, j):
                y[k] = max(height, y[k])
        r = []
        yp = 0
        for xi, yi in zip(x, y):
            if yi != yp:
                r.append([xi, yi])
            yp = yi
        return r


buildings = [[0,2,3],[2,5,3]]
buildings = [[1,2,1],[1,2,2],[1,2,3]]
buildings = [[0,9,10],[4,9,15],[4,9,12],[10,12,10],[10,12,8]]
r = Solution().getSkyline(buildings)
print(r)
