class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }

        for (auto x : umap) {
            int val = x.second;
            umap[x.first] = val * (val - 1) / 2;
        }

        for (auto x : umap) {
            count += x.second;
        }
        return count;
    }
};