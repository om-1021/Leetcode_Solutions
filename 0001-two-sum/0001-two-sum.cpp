class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        vector <int> result;
        unordered_map<int,int> set;
        for(int i=0;i<nums.size();i++)
        {
            
            if(set.find(target-nums[i])!=set.end())
            {
             result.push_back(set[target-nums[i]]);
             result.push_back(i);
             return result;
            }
            set[nums[i]]=i;
                
        }
        return result;
        
    }
};