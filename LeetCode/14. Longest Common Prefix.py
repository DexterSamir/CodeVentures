class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        lcp=""
        
        if strs is None or len(strs)==0: 
            return lcp
        
        minl=len(strs[0])
        
        for i in range (1,len(strs)):
            minl = min(minl,len(strs[i]))
        
        for i in range (0,minl):
            ch = strs[0][i]
            for j in range (0,len(strs)):
                if strs[j][i] != ch:
                    return lcp
            lcp+=ch
        return lcp
                
        
