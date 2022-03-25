class Solution:

    def stoneGameIII(self, stoneValue):
        n = len(stoneValue)
        a = b = c = 0   # 当前可取的三个值
        x = y = z = 0   # 不同取法，对手的相对得分情况
        while stoneValue:
            c = b
            b = a
            a = stoneValue.pop()
            t = max(a - x, a + b - y, a + b + c - z)
            z = y
            y = x
            x = t
        if x < 0:
            return 'Bob'
        elif x > 0:
            return 'Alice'
        else:
            return 'Tie'


values = [1,2,3,7]
values = [1,2,3,-9]
values = [1,2,3,6]
r = Solution().stoneGameIII(values)
print(r)
