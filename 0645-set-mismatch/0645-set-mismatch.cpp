class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         int dupeNum ;
         int n = nums.size();
         int actual_sum = nums[n-1];
         for(int i=0;i<n-1;i++){
            actual_sum += nums[i];
         for(int j= i+1;j<n;j++){
            if(nums[i] == nums[j]){
            dupeNum = nums[i];
            }
         }
         }

         int expected_sum = n*(n+1)/2;
         int missingNum = expected_sum - (actual_sum - dupeNum);

         return {dupeNum,missingNum};

    }
};

// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int dupeNum = -1;
//         int actual_sum = 0;
//         int n = nums.size();
//         unordered_set<int> seen; // To track the seen numbers

//         for (int num : nums) {
//             actual_sum += num;
//             if (seen.find(num) != seen.end()) {
//                 dupeNum = num; // Found the duplicate number
//             }
//             seen.insert(num);
//         }

//         int expected_sum = n * (n + 1) / 2;
//         int missingNum = expected_sum - (actual_sum - dupeNum);

//         return {dupeNum, missingNum};
//     }
// };
