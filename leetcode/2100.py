
class Solution(object):
    def goodDaysToRobBank(self, security, time):
        """
        :type security: List[int]
        :type time: int
        :rtype: List[int]
        """
        r = []
        r1 = []
        r2 = []
        for i in range(len(security)):
            if i and security[i] <= security[i - 1]:
                r1.append(r1[-1] + 1)
            else:
                r1.append(0)
            if i and security[-i - 1] <= security[-i]:
                r2.append(r2[-1] + 1)
            else:
                r2.append(0)
        r2 = r2[::-1]
        for i, (c1, c2) in enumerate(zip(r1, r2)):
            if c1 >= time and c2 >= time:
                r.append(i)
        return r
