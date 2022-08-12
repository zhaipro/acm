class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        groups = defaultdict(list)
        for i, size in enumerate(groupSizes):
            groups[size].append(i)
        r = []
        for size, group in groups.items():
            r.append([])
            for i in group:
                if len(r[-1]) == size:
                    r.append([])
                r[-1].append(i)
        return r
