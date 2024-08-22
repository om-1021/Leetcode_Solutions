class NumArray {
public:
 
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            
            sum += nums[i];
            this->prefixSum[i] = sum;
        }
    }

    int sumRange(int left, int right) {

        return (left - 1) >= 0 ? prefixSum[right] - prefixSum[left - 1]
                               : prefixSum[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */