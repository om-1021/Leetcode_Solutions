class Solution {
public:
    bool makeEqual(vector<string>& words) {
       
      
       unordered_map<char,int> umap;
       for(int i=0;i<words.size();i++){
        for(auto x : words[i]){
            umap[x]++;
        }
       }

       for(auto x : umap ){
        if(x.second % words.size() != 0)
        return false;
       }
       return true;
        
    }
};