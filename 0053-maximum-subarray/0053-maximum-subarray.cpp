class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum =0;
        int greatest_sum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr_sum+= nums[i];
            greatest_sum = max(curr_sum,greatest_sum);
            if(curr_sum<=0){
                curr_sum =0;
            }
        }
        return greatest_sum;
    }
};