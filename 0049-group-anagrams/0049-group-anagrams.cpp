class Solution {
public:
    string countSort (string s){
        string result = "";
        vector<int> vec(26,0);
        for(char str : s){
            vec[(int)str - 97]++;
        }
        for(int i=0;i<26;i++){
            while(vec[i] != 0){
                result+=(char)i+97;
                vec[i]--;
            }
        }
        return result;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> umap;
        vector<vector<string>> ans;
        for(auto x :strs){
            string temp = x;  // store original string into temp and then sort
            // sort(temp.begin(),temp.end()); //  we dont want to modify original string
            string another = countSort(temp);
            umap[another].push_back(x);
        }
        for(auto x : umap){
            ans.push_back(x.second);
        }

        return ans;
      // use bucket sort (26 indexing array) to sort the array to reduce O(nlogN) -> O(n) 

        
    }
};

