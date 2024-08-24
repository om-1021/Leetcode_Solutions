// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//          int dupeNum ;
//          int actual_sum =0;
//         //  int firstIndexOfDupe;
//          for(int i=0;i<nums.size()-1;i++)
//          for(int j= i+1;j<nums.size();j++){
//             actual_sum += nums[j];
//             if(nums[i] == nums[j]){
//                 // firstIndexOfDupe = i;
//             dupeNum = nums[i];
//             }
//          }

//          int n = nums.size();
//          int expected_sum = (int)(n*(n+1))/2;
//          int missingNum = expected_sum - (actual_sum - dupeNum);

//          return {dupeNum,missingNum};

//     }
// };

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dupeNum = -1;
        int actual_sum = 0;
        int n = nums.size();
        unordered_set<int> seen; // To track the seen numbers

        for (int num : nums) {
            actual_sum += num;
            if (seen.find(num) != seen.end()) {
                dupeNum = num; // Found the duplicate number
            }
            seen.insert(num);
        }

        int expected_sum = n * (n + 1) / 2;
        int missingNum = expected_sum - (actual_sum - dupeNum);

        return {dupeNum, missingNum};
    }
};
