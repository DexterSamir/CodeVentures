// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int low,high,mid,version;
        low=1;
        high=n;
        version=n;
        
        while(low<=high){
            mid= (low+high)/2;
            
            if(isBadVersion(mid)){
                version=mid;
                high=mid-1;
            }
            else low =mid+1;
        }
        
        return version;
        
    }
};
