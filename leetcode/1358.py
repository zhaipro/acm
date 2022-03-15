class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        r = 0
        x, y, z = -1, -1, -1
        p1, p2 = -1, -1
        n = len(s)
        for i, c in enumerate(s):
            if c == 'a':
                x = i
            elif c == 'b':
                y = i
            else:
                z = i
            if x >= 0 and y >= 0 and z >= 0:
                if p1 >= 0:
                    r += (p1 + 1) * (i - p2)

                p1 = min(x, y, z)
                p2 = max(x, y, z)
                if x == p1:
                    x = -1
                elif y == p1:
                    y = -1
                else:
                    z = -1
        if p1 >= 0:
            r += (p1 + 1) * (n - p2)
        return r
