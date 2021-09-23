class MinStack:

    def __init__(self):
        self.stack = []
        self.r = []

    def push(self, val: int) -> None:
        if self.stack:
            self.r.append(min(val, self.r[-1]))
        else:
            self.r.append(val)
        self.stack.append(val)

    def pop(self) -> None:
        self.stack.pop()
        self.r.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.r[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
