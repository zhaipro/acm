class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        t = -1
        for i in range(len(tokens)):
            if tokens[i] == '+':
                tokens[t - 1] += tokens[t]
                t -= 1
            elif tokens[i] == '-':
                tokens[t - 1] -= tokens[t]
                t -= 1
            elif tokens[i] == '*':
                tokens[t - 1] *= tokens[t]
                t -= 1
            elif tokens[i] == '/':
                tokens[t - 1] /= tokens[t]
                if tokens[t - 1] < 0:
                    tokens[t - 1] = math.ceil(tokens[t - 1])
                else:
                    tokens[t - 1] = math.floor(tokens[t - 1])
                t -= 1
            else:
                t += 1
                tokens[t] = int(tokens[i])
        return tokens[0]
