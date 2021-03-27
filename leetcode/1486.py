class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        r = 0
        for i in range(n):
            r ^= start + 2 * i
        return r
