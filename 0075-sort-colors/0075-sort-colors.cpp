class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int itr = 0;
       
       // Dutch National Flag Algorithm
       // take 3 pointers 1 for keeping track of index for 0
       // 2nd for keeping track of index for 2 
       // 3rd for iteratiing over the array
       // whenever 0 is encountered place it at index i - > increase both iterator and i pointers
       // whenever 2 is encountered place it at index -> decrement only j pointer
        while (itr <= j) {
            if (nums[itr] == 1) {
                itr++;
                continue;
               }
            else if (nums[itr] == 0) {
                swap(nums[itr], nums[i]);
                itr++;
                i++;
            }

           else if (nums[itr] == 2) {
                swap(nums[itr], nums[j]);
                j--;
            }

            
        }
    }
};