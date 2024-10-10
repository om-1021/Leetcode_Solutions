class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
         int n = nums.size();
        vector<int> maxi = nums;

        for (int i = n - 2; i >= 0; i--) {
            maxi[i] = max(nums[i], maxi[i + 1]);
        }

        int left = 0;
        int res = 0;
        for (int right = 0; right < nums.size(); right++) {
            while (nums[left] > maxi[right])
                left++;

            res = max(res, right - left);
        }
        return res;
        
    }
};