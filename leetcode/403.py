class Solution:
    def canCross(self, stones):
        n = len(stones)
        choices = [set() for _ in range(n)]
        choices[0].add(1)
        for i in range(n):
            for c in choices[i]:
                x = stones[i] + c
                j = i + 1
                while j < n and stones[j] < x:
                    j += 1
                if j < n and stones[j] == x:
                    for y in range(max(c - 1, 1), c + 2):
                        choices[j].add(y)
        return bool(choices[-1])


stones = [0,1,3,5,6,8,12,17]
stones = [0,1,2,3,4,5,6,10,13,15,18]
r = Solution().canCross(stones)
print(r)
