class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        int start = 1;
        while(start <= n){
        int count =0;
            for(auto x : nums){
                if(x >= start)
                count++;
            }
            if(start == count)
            return start;

            start++;
        }
        return -1;
    }
};