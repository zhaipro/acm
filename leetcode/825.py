class Solution:
    def numFriendRequests(self, ages: List[int]) -> int:
        r = 0
        # 准备工作
        counter = [0] * 121
        for age in ages:
            counter[age] += 1
        # 同龄人
        for x in counter[15:]:
            r += x * (x - 1)
        for x in range(121):
            r += sum(counter[x // 2 + 8:x]) * counter[x]
        return r
