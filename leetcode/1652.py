class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        if k == 0:
            return [0] * len(code)
        d = abs(k)
        v = k // d
        n = len(code)
        r = []
        for i in range(n):
            s = 0
            for j in range(1, d + 1):
                s += code[(i + j * v) % n]
            r.append(s)
        return r
