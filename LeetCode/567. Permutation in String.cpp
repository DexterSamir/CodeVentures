//sliding window
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<int,int> m ;
        
        for(auto c:s1){
            m[c]++;
        }
        
        int left=0,right=0;
        int n=s1.size();
        while(right<s2.size()){
            if(m[s2[right++]]-- >0) n--;
            
            while(n==0){
                if( right -left == s1.size()) return true;
                if(++m[s2[left++]] >0) n++;
            }
        }
        
        return false;
    }
};
