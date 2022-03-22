import bisect


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
