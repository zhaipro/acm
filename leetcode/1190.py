class Solution:
    def reverseParentheses(self, s):
        t = []
        r = []
        for i, c in enumerate(s):
            if c == '(':
                t.append(len(r))
            elif c == ')':
                i = t.pop()
                r[i:] = r[i:][::-1]
            else:
                r.append(c)
        return ''.join(r)

s = "(u(love)i)"
s = "ta()usw((((a))))"
r = Solution().reverseParentheses(s)
print(r)
