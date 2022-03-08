class Solution(object):
    def platesBetweenCandles(self, s, queries):
        """
        :type s: str
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        def metering(s):
            data = []
            t1 = 0
            t2 = 0
            t3 = 0
            for c in s:
                if c == '|':
                    t1 = 1
                    t3 = t2
                else:
                    t2 += t1
                data.append(t3)
            return data
        data1 = metering(s)
        data2 = metering(s[::-1])
        answer = []
        for l, r in queries:
            # 求交集
            answer.append(max(data1[r] + data2[-1 - l] - data1[-1], 0))
        return answer
