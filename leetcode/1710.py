class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        r = 0
        boxTypes.sort(key=lambda x:x[1])
        while truckSize > 0 and boxTypes:
            numberOfBoxes, numberOfUnitsPerBox = boxTypes.pop()
            b = min(truckSize, numberOfBoxes)
            r += b * numberOfUnitsPerBox
            truckSize -= b
        return r
