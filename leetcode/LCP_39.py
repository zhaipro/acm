class Solution:
    def minimumSwitchingTimes(self, source: List[List[int]], target: List[List[int]]) -> int:
        c1 = collections.Counter()
        for line in source:
            c1.update(line)
        c2 = collections.Counter()
        for line in target:
            c2.update(line)
        return sum((c1 - c2).values())
