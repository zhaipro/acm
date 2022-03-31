class Solution(object):
    def candy(self, ratings):
        """
        :type ratings: List[int]
        :rtype: int
        """
        def get_candy(ratings):
            n = len(ratings)
            scores = []
            for i in range(n):
                if i > 0 and ratings[i] > ratings[i - 1]:
                    scores.append(scores[-1] + 1)
                else:
                    scores.append(1)
            return scores
        scores1 = get_candy(ratings)
        scores2 = get_candy(ratings[::-1])[::-1]
        r = sum(max(s1, s2) for s1, s2 in zip(scores1, scores2))
        return r


ratings = [1,0,2]
r = Solution().candy(ratings)
print(r)
