import bisect

import numpy as np


def LIS(nums):
    # longest increasing subsequence
    r = []
    for num in nums:
        if not r or num > r[-1]:
            r.append(num)
        else:
            index = bisect.bisect_left(r, num)
            r[index] = num
    return r


def cummin(arr):
    r = []
    t = arr[0]
    for x in arr:
        t = min(t, x)
        r.append(t)
    return np.array(r)


def cummax(arr):
    r = []
    t = arr[0]
    for x in arr:
        t = max(t, x)
        r.append(t)
    return np.array(r)


def cumsum(nums):
    s = 0
    for x in nums:
        s += x
        yield s


def argmin(nums):
    return nums.index(min(nums))


def argmax(nums):
    return nums.index(max(nums))


def summation_for_geometric_sequence (a1, q, n):
    return a1 * (1 - q ** n) / (1 - q)
