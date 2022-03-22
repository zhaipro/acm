
class Solution:
    def maxEnvelopes(self, envelopes):
        envelopes.sort(key=lambda x: (x[0], -x[1]))

        f = [envelopes[0][1]]
        for _, num in envelopes:
            if num > f[-1]:
                f.append(num)
            else:
                index = bisect.bisect_left(f, num)
                f[index] = num

        return len(f)
