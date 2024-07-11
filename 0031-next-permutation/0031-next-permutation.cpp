class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // using STL
        // next_permutation(nums.begin(),nums.end());
        int index = -1;
        int n = nums.size();

        // finding the break point where the left elements is smaller then the right element
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // swapping the next greater element from the breakpoint element
        if (index != -1) {
            for (int i = n - 1; i >= index; i--) {
                if (nums[i] > nums[index]) {
                    swap(nums[i], nums[index]);
                    break;
                }
            }
        // sorting the remaining the array to get the minimum value 
        reverse(nums.begin()+index+1,nums.end());
        }
        else
        // if no break point is found that means its the largest permutation and next permutation will be the smallest one
        // which will be the reverse of the largest one 
        reverse(nums.begin(),nums.end());

    }
};