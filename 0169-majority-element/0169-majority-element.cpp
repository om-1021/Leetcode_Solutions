class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                candidate = nums[i];
                count++;
                continue;
            }
            if( nums[i] == candidate)
            count++;
            else if(nums[i] != candidate)
            count--;            
        }
        return candidate;            

        }
    
};