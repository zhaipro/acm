class Solution:
    def maxDepthAfterSplit(self, seq: str) -> List[int]:
        stack = []
        result = []
        i = j = 0
        for c in seq:
            if c == '(':
                if j > i:
                    result.append(0)
                    stack.append(0)
                    i += 1
                else:
                    result.append(1)
                    stack.append(1)
                    j += 1
            elif c == ')':
                t = stack.pop()
                if t == 0:
                    result.append(0)
                    i -= 1
                else:
                    result.append(1)
                    j -= 1
        return result
