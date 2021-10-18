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
