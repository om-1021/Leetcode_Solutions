class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> umap;
        vector<vector<string>> ans;
        for(auto x :strs){
            string temp = x;  // store original string into temp and then sort
            sort(temp.begin(),temp.end()); //  we dont want to modify original string
            umap[temp].push_back(x);
        }
        for(auto x : umap){
            ans.push_back(x.second);
        }

        return ans;
// use bucket sort (26 indexing array) to sort the array to reduce O(nlogN) -> O(n) 

        
    }
};

