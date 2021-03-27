class Solution:
    def balancedStringSplit(self, s: str) -> int:
        r = 0
        i = 0
        for c in s:
            if c == 'R':
                i += 1
            else:
                i -= 1
            if i == 0:
                r += 1
        return r
