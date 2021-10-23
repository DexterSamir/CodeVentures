class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(128,-1);
        int p=0;
        int res=0;
        for(int i=0;i<s.size();i++){
            
            if(v[s[i]]!=-1){
                p = max(p, v[s[i]]);
            }
            
            res = max(res, i-p+1); 
            v[s[i]]= i+1;    
                
            
        }
        
        return res;
        
    }
};
