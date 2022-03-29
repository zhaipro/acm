class Solution:
    def maxConsecutiveAnswers(self, answerKey, k):
        r = 0
        s = 0
        t = 0
        n = len(answerKey)
        for i in range(n):
            t += answerKey[i] == 'T'
            e = i + 1
            while min(t, e - s - t) > k:
                t -= answerKey[s] == 'T'
                s += 1
            r = max(r, e - s)
        return r

answerKey = "TFFT"
k = 1
r = Solution().maxConsecutiveAnswers(answerKey, k)
print(r)
