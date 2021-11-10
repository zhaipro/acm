class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        r1 = {}
        r2 = {}
        worlds = s.split()
        if len(worlds) != len(pattern):
            return False
        for c, w in zip(pattern, worlds):
            if c in r1 and r1[c] != w:
                return False
            if w in r2 and r2[w] != c:
                return False
            r1[c] = w
            r2[w] = c
        return True
