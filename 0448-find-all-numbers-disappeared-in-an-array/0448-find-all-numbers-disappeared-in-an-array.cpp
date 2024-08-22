class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums){
       vector<int> ans;
       unordered_map<int,bool> umap;
       for(int i =1;i<=nums.size();i++){
        umap[i] = false;
    }
    for(auto x: nums){
        umap[x] = true;
    }

    for(auto x : umap){
        if(x.second == false)
        ans.push_back(x.first);
    }
       return ans;
        
    }
};