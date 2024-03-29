class CQueue:

    def __init__(self):
        self.q = []

    def appendTail(self, value: int) -> None:
        self.q.append(value)

    def deleteHead(self) -> int:
        return self.q.pop(0) if self.q else -1


# Your CQueue object will be instantiated and called as such:
# obj = CQueue()
# obj.appendTail(value)
# param_2 = obj.deleteHead()
