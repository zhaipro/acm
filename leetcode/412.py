class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        r = []
        for x in range(1, n + 1):
            if x % 3 == 0 and x % 5 == 0:
                r.append('FizzBuzz')
            elif x % 3 == 0:
                r.append('Fizz')
            elif x % 5 == 0:
                r.append('Buzz')
            else:
                r.append(str(x))
        return r
