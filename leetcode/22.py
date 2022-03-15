class Solution:
    def _generateParenthesis(self, n, m):
        r = []
        assert n <= m
        if n + m == 1:
            return [')']
        if n:
            for t in self._generateParenthesis(n - 1, m):
                r.append('(' + t)
        if n < m:
            for t in self._generateParenthesis(n, m - 1):
                r.append(')' + t)
        return r

    def generateParenthesis(self, n):
        return self._generateParenthesis(n, n)
