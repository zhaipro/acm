class Solution:
    def threeEqualParts(self, arr):
        n = len(arr)
        t = sum(arr)
        if t % 3:
            return -1, -1
        t //= 3
        # [0, i], (i, j), [j, n)
        # [1,0,1,0,1]
        # 1, 01, 01
        if t == 0:
            return 0, 2
        c = 0
        i = j = k = -1
        for l, x in enumerate(arr):
            if x != 1:
                continue
            if i == -1:
                i = l
            elif j == -1:
                c += 1
                if c == t:
                    j = l
                    c = 0
            else:
                c += 1
                if c == t:
                    k = l
        for _ in range(k, n):
            if arr[i] != arr[j] or arr[j] != arr[k]:
                return [-1, -1]
            i += 1
            j += 1
            k += 1
        return [i - 1, j]
