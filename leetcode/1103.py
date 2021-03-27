class Solution:
    def distributeCandies(self, candies: int, num_people: int) -> List[int]:
        r = [0] * num_people
        i = 0
        while True:
            if i + 1 < candies:
                r[i % num_people] += i + 1
            else:
                r[i % num_people] += candies
                break
            i += 1
            candies -= i
        return r
