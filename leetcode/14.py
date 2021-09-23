class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        r = 0
        l = min(len(s) for s in strs)
        for i in range(l):
            c = strs[0][i]
            for s in strs:
                if c != s[i]:
                    return strs[0][:r]
            r += 1
        return strs[0][:r]
