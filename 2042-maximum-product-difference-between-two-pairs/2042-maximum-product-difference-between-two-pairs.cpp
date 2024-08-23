class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        // find max-1 find max-2
        // find min-1 find min-2 
        // do it in O(n) thats it no need to sort

        return (nums[n-1]*nums[n-2]) - (nums[0] * nums[1]);
    }
};