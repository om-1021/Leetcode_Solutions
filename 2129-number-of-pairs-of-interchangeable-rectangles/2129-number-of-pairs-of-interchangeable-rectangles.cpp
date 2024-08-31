class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {

        unordered_map<double,long> umap;
        long long count = 0;
        for(int i=0;i<rectangles.size();i++){
            double ratio = (double)rectangles[i][0]/(double)rectangles[i][1];
            umap[ratio]++;
        }

        for(auto x : umap){
            count += ((x.second - 1) * x.second) / 2;
        }

        return count;

       
        
    }
};