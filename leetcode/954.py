
class Solution:
    def canReorderDoubled(self, arr):
        arr.sort()
        r = []
        for x in arr:
            if not r or x < r[0]:
                x = x * 2 if x > 0 else x / 2
                r.append(x)
            elif x == r[0]:
                r.pop(0)
            else:
                return False
        return len(r) == 0


arr = [-3,-1.5,3,6]
# arr = [-5,-3]
r = Solution().canReorderDoubled(arr)
print(r)
