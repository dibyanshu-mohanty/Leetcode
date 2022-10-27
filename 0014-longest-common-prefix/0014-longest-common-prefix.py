class Solution(object):
    def longestCommonPrefix(self, strs):
        n = len(strs)
        strs.sort()
        shortestStringLength = min(len(strs[0]),len(strs[n-1]))
        i = 0
        while (i<shortestStringLength and strs[0][i] == strs[n-1][i]):
            i +=1
        return strs[0][0:i]
        