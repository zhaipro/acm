class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i, j = 0, len(numbers) - 1
        while True:
            y = numbers[i] + numbers[j]
            if y > target:
                j -= 1
            elif y < target:
                i += 1
            else:
                return [i + 1, j + 1]
