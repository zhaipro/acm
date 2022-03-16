class Solution:
    def trap(self, height: List[int]) -> int:
        r = 0
        n = len(height)
        rank = sorted(range(n), key=lambda i:height[i], reverse=True)
        sign = [0] * n
        x = y = rank[0]
        sign[x] = 1
        for z in rank:
            if sign[z]:
                continue
            if z < x:
                for i in range(z + 1, x):
                    r += height[z] - height[i]
                    sign[i] = 1
                x = z
            else:
                for i in range(y + 1, z):
                    r += height[z] - height[i]
                    sign[i] = 1
                y = z
        return r
