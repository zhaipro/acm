class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        t = 1
        for i in range(len(digits) - 1, -1, -1):
            x = digits[i]
            x += t
            t = x // 10
            digits[i] = x % 10
        if t:
            digits.insert(0, 1)
        return digits
