
def f(n):
    r = 1
    p = 0
    for i in range(n):
        p = r
        r = r * (11 - n + i) + 1
    return r - p


class Solution:

    def countNumbersWithUniqueDigits(self, n: int) -> int:
        return f(n)
