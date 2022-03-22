
from misc import LIS


class Solution:
    def maxEnvelopes(self, envelopes):
        envelopes.sort(key=lambda x: (x[0], -x[1]))
        nums = (e[1] for e in envelopes)
        return len(LIS(nums))
