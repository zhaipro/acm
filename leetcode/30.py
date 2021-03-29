class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.lst = []
        self.mst = []

    def push(self, x: int) -> None:
        self.mst.append(min(self.mst[-1], x) if self.mst else x)
        self.lst.append(x)

    def pop(self) -> None:
        self.lst.pop()
        self.mst.pop()

    def top(self) -> int:
        return self.lst[-1]

    def min(self) -> int:
        return self.mst[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.min()
