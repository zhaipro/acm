class Solution:

    def combine(self, n: int, k: int) -> List[List[int]]:
        r = []
        t = list(range(1, k + 1))
        i = k
        while i >= 0:
            if i == k:
                r.append(t)
                t = t.copy()
                i -= 1
            if t[i] < n - k + i + 1:
                t[i] += 1
                for i in range(i + 1, k):
                    t[i] = t[i - 1] + 1
                i = k
            else:
                i -= 1
        return r
