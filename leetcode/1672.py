class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        r = 0
        for account in accounts:
            t = sum(account)
            if t > r:
                r = t
        return r
