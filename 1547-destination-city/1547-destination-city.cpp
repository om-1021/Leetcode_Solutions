class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        
        unordered_map<string,string> umap;
        string ans ;
        for(int i=0;i<paths.size();i++){
            umap[paths[i][0]]=paths[0][1];
        }
         for(int i=0;i<paths.size();i++){
            if(umap.find(paths[i][1]) == umap.end()){
                ans= paths[i][1];
                break;
            }
        }

    return ans;
    }
};