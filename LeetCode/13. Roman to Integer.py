class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        
        """
        rmap= {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        n=len(s)
        r=rmap[s[n-1]]
        for i in range(n-2,-1,-1):
            if(rmap[s[i]] >= rmap[s[i+1]]):
                r += rmap[s[i]] 
            else:
                r -= rmap[s[i]]
        return r
