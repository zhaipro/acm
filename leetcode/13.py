class Solution:
    def romanToInt(self, s: str) -> int:
        r = 0
        m = 0
        d = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        for c in s[::-1]:
            c = d[c]
            if c >= m:
                r += c
                m = c
            else:
                r -= c
        return r
