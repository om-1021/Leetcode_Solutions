class Solution {
public:
    int trap(vector<int>& nums) {
       int n = nums.size();
       int left = 0;
       int right = n-1;        
        
       int totalWater = 0;
       int left_max = 0;
       int right_max = 0;

        while(left<=right){
          if(nums[left]<=nums[right]){
            if(nums[left] >= left_max){
              left_max= nums[left];
            }
            else{
              totalWater += left_max - nums[left];
            }
            left++;
          }
          else{
            if(nums[right]>=right_max){
              right_max = nums[right];
            }
            else{
              totalWater += right_max - nums[right];
            }
            right--;
          }

        }
        return totalWater;
    }
};