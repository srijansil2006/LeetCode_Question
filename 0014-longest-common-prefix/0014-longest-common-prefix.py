class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        s = ""
        shortest = min(strs, key = len)
        for i in range(len(shortest)):
            for ch in strs :
                if shortest[i] != ch[i]:
                    return s
            else:
                s += shortest[i]  
        return s                     