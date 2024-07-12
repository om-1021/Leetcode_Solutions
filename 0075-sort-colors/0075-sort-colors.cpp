class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int index0 = 0;
        int index2 = n - 1;
        
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                swap(nums[i],nums[index0]);
                index0++;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(nums[i] == 2){
                swap(nums[i],nums[index2]);
                index2--;
            }
        }
    }
};