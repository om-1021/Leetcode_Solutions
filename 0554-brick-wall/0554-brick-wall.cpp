class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> umap;
        umap.insert({0,0});


        int sum ;
        for (int i = 0; i < wall.size(); i++) {
            sum =0;
            
            for (int j = 0; j < wall[i].size()-1; j++) {
                sum += wall[i][j];
                umap[sum]++;
            }
        }
        int maxi = INT_MIN;
        for (auto x : umap) {
            maxi = max(x.second, maxi);
        }
        int res = wall.size() - maxi;
        return res;
    }
};