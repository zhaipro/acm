class Solution:
    def carPooling(self, trips, capacity):
        r = [(0, 1000)]
        trips.sort(key=lambda x:x[1])
        for n, s, e in trips:
            while r[0][1] <= s:  # s < e <= 1000
                r.pop(0)
            for i, (_n, _e) in enumerate(r):
                if _n + n > capacity:
                    return False
                if e >= _e:
                    r[i] = _n + n, _e
                else:
                    r.insert(i, (_n + n, e))
                    break
        return True


trips = [[2,1,5],[3,3,7]]
capacity = 4
# trips = [[2,1,5],[3,3,7]]
# capacity = 5
# trips = [[2,1,5],[3,5,7]]
# capacity = 3
r = Solution().carPooling(trips, capacity)
print(r)
