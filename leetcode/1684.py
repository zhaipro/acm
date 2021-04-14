class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        r = 0
        for s in words:
            for c in s:
                if c not in allowed:
                    break
            else:
                r += 1
        return r
