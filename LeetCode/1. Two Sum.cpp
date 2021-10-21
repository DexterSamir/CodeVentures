//soultion 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            
            if(m.find(target-nums[i]) != m.end()){
                auto itr = m.find(target-nums[i]);
                
                result[0]= i;
                result[1]= itr->second;
                return result;
            }
            
            m.insert({nums[i],i});
        }
        return result;
    }
};
