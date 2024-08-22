class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        // unordered_map<int, bool> umap;
        // for (int i = 1; i <= nums.size(); i++) {
        //     umap[i] = false;
        // }
        // for (auto x : nums) {
        //     umap[x] = true;
        // }

        // for (auto x : umap) {
        //     if (x.second == false)
        //         ans.push_back(x.first);
        // }

        
        for (int i = 0; i < nums.size(); i++) {
           int index = abs(nums[i])-1;
           if(nums[index] > 0){
            nums[index] = -nums[index] ;
           }
        }
        for(int i =0;i<nums.size();i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};