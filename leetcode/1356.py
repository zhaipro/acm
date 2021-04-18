class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        # print(arr)
        arr.sort(key=lambda x:(sum(int(c) for c in bin(x)[2:]), x))
        # print(arr)
        return arr
