class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long y=0,z=x;
        do{
            y = y*10 + x%10;
        }while(x/=10);
            
        return y==z;
    }
};
