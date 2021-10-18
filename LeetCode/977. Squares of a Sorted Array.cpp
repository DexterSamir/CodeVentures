//Using Two pointers

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =  nums.size();
        vector<int> res(n);
        
        int low=0;
        int high=n-1;
        
        for(int i=n-1;i>=0;i--){
         
            if(abs(nums[high]) > abs(nums[low])){
                int x = nums[high] * nums[high];
                res[i]= x;
                high--;
            }
            
            else{
                int x = nums[low] * nums[low];
                res[i]= x;
                low++; 
            }
        }
        
        return res;
    }
};






//Normal approach
/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =  nums.size();
        vector<int> res(n);
        
        for(int i=0;i<n;i++){
            int x = nums[i] * nums[i];
            res.push_back(x);
        }
        
        sort(res.begin(),res.end());
        
        return res;
    }
};
*/
