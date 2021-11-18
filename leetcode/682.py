class Solution:
    def calPoints(self, ops: List[str]) -> int:
        r = []
        for c in ops:
            if c == '+':
                r.append(r[-2] + r[-1])
            elif c == 'D':
                r.append(r[-1] * 2)
            elif c == 'C':
                r.pop()
            else:
                r.append(int(c))
        return sum(r)
