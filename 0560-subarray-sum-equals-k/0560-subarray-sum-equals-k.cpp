class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        // make a hash map which stores 
        //all the available sums and thier count on the left side of the pointer
        // then we check if there's and subarray with sum-k so that we can subtract
        // and get the desired value k if a such subarray exists then how many 
        // and we count the number of such subarrays using the count available in map
        int sum =0;
        int count =0;
        umap.insert({0,1});

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(umap.find(sum-k) != umap.end()){
                count += umap[sum-k];
            }
            umap[sum]++;
        }
        return count;
    }
};