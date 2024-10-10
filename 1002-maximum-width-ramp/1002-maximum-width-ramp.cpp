class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxi = nums;
        // keeps tracks of greatest elements on right
        for (int i = n - 2; i >= 0; i--) {
            maxi[i] = max(nums[i], maxi[i + 1]);
        }

        int left = 0;
        int res = 0;

        for (int right = 0; right < nums.size(); right++) {
            // if there are no greater element on the right then
            // wont be able to create a window so move left pointer
            // if left > right means no possible ramps are left

            while (nums[left] > maxi[right]) {
                if (left >= right)
                    return 0;
                left++;
            }

            res = max(res, right - left);
        }
        return res;
    }
};