class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    unordered_set<int> s(nums.begin(),nums.end());
        // for(int i=0; i<nums.size();i++)
        // {
        //     if(s.find(nums[i])==s.end())
        //     {
        //         s.insert(nums[i]);
        //     }
        //     else 
        //         return true;
        // }
        // s.insert(nums.begin(),nums.end());
        if(s.size() == nums.size())
        return false;
        else
        return true;
        
    }
};