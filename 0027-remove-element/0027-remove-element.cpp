class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        int i =0;
        while(i<nums.size()){
            if(nums[i]!=val){
                nums[index] = nums[i];
                index++;
            }
            i++;
        }
        return index;
    }
};